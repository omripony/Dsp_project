clc
clear all
close all 

% Specify the path to the data file
filename = 'raw_data.txt';

% Use the readmatrix function to import the data
data = readmatrix(filename);
% Display the imported data
disp('Imported Data:');
disp(data);

fs = 800; % Sampling frequency in Hz
samples = 1:length(data);

figure(1);
plot(samples, data);
xlabel('Sample Index'); % Labeling the x-axis as 'Sample Index'
ylabel('heartbeat Data Value');
title('Plot of heartbeat Data vs. Samples'); % Adding a title to the plot

signalLengthInSamples=length(data);
np = 2^nextpow2(signalLengthInSamples);
F=fft(data,np);
twoSidedPowerSpectrum=abs(F/np);
frequencyForTwoSidedSpectrum=-np/2:np/2-1;

% Plotting the two-sided FFT
figure(2)
plot(frequencyForTwoSidedSpectrum,twoSidedPowerSpectrum);
title('two-Sided FFT of heartbeat Data Signal');
xlabel('non arranged frequency (Hz)');
ylabel('power');

% Plotting the one-sided FFT
oneSidedPowerSpectrum=twoSidedPowerSpectrum(1:np/2+1);
oneSidedPowerSpectrum(2:end-1)=2*oneSidedPowerSpectrum(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);
figure(3)
plot(frequency,oneSidedPowerSpectrum)
title('One-Sided FFT of heartbeat Data Signal');
xlabel('arranged frequency (Hz)');
ylabel('power');

figure(4)
spectrogram(data, 256, 250, 256, fs, 'yaxis');
title('Spectrogram of of heartbeat Data Signal');
colormap('jet'); % Use the 'jet' colormap for better visibility
colorbar;
caxis([-100 20]) % Adjust the color axis to improve contrast

%% first filter-LP
load LP_coeff.mat;

% Apply the SOS filter to the data
filteredData_LP = sosfilt(SOS, data);
filteredData_LP = filteredData_LP * G(end);

% Now you can plot the filtered data
figure(5);
plot(samples, filteredData_LP);
xlabel('Sample Index');
ylabel('Filtered heartbeat Data Value');
title('Filtered heartbeat Data using Elliptic IIR Filter');

F_LP=fft(filteredData_LP,np);
twoSidedPowerSpectrum_LP=abs(F_LP/np);
frequencyForTwoSidedSpectrum_LP=-np/2:np/2-1;

% Plotting the two-sided FFT
figure(6)
plot(frequencyForTwoSidedSpectrum_LP,twoSidedPowerSpectrum_LP);
title('two-Sided FFT of heartbeat Data Signal after LPF');
xlabel('non arranged frequency (Hz)');
ylabel('power');

% Plotting the one-sided FFT
oneSidedPowerSpectrum_LP=twoSidedPowerSpectrum_LP(1:np/2+1);
oneSidedPowerSpectrum_LP(2:end-1)=2*oneSidedPowerSpectrum_LP(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(7)
plot(frequency,oneSidedPowerSpectrum_LP)
title('One-Sided FFT of heartbeat Data Signal after LPF');
xlabel('arranged frequency (Hz)');
ylabel('power');

figure(8)
% spectrogram(filteredData_LP, 256, 250, 256, fs, 'yaxis');
% title('Spectrogram of of heartbeat Data Signal');
% colormap('jet'); % Use the 'jet' colormap for better visibility
% colorbar;
% caxis([-100 20]) % Adjust the color axis to improve contrast

%% second filter-notch on the big delta at 60 Hz
% Design parameters
notchFreq = 60; % Frequency to notch out in Hz
bandwidth = 5;  % Bandwidth of the notch
Fs = 800;       % Sampling Frequency

% Create the notch filter
notchFilter = fdesign.notch('N,F0,BW', 2, notchFreq, bandwidth, Fs);
notchFilter = design(notchFilter, 'butter');

% Apply the notch filter to the data
filteredData_notch = filtfilt(notchFilter.sosMatrix, notchFilter.ScaleValues, filteredData_LP);

% Plot the filtered data
figure(9);
plot(samples, filteredData_notch);
xlabel('Sample Index');
ylabel('Filtered Data Value');
title('Filtered heartbeat Data using LPF and then notch at 60 Hz');

F_LP_notch=fft(filteredData_notch,np);
twoSidedPowerSpectrum_LP_notch=abs(F_LP_notch/np);
frequencyForTwoSidedSpectrum_LP_notch=-np/2:np/2-1;

% Plotting the two-sided FFT
figure(10)
plot(frequencyForTwoSidedSpectrum_LP_notch,twoSidedPowerSpectrum_LP_notch);
title('two-Sided FFT of heartbeat Data Signal after LPF and notch at 60 Hz');
xlabel('non arranged frequency (Hz)');
ylabel('power');

% Plotting the one-sided FFT
oneSidedPowerSpectrum_LP_notch=twoSidedPowerSpectrum_LP_notch(1:np/2+1);
oneSidedPowerSpectrum_LP_notch(2:end-1)=2*oneSidedPowerSpectrum_LP_notch(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(12)
plot(frequency,oneSidedPowerSpectrum_LP_notch)
title('One-Sided FFT of heartbeat Data Signal after LPF and notch at 60 Hz');
xlabel('arranged frequency (Hz)');
ylabel('power');

notchFilter = fdesign.notch('N,F0,BW', 2, notchFreq, bandwidth, Fs);
sosNotchFilter = design(notchFilter, 'butter');

% SOS matrix where each row corresponds to the coefficients of a second-order filter section
sosMatrix = sosNotchFilter.sosMatrix;
disp('SOS Coefficients:(of the notch)');
disp(sosMatrix);

% Scale values for the SOS sections
scaleValues = sosNotchFilter.ScaleValues;
disp('Scale Values: (of the notch)');
disp(scaleValues);

% You can also extract the 'b' and 'a' coefficients if you prefer that format.
% However, this is not recommended for high order filters due to numerical instability.
[b, a] = sos2tf(sosNotchFilter.sosMatrix, sosNotchFilter.ScaleValues);
disp('Numerator coefficients of the LPF (b):');
disp(b);
disp('Denominator coefficients of the LPF(a):');
disp(a);

%% third filter-HPF on the big delta at DC frequency
hpCutoff = 2;  % Very low cutoff frequency, just above 0 Hz
hpOrder = 4;     % Possibly a higher filter order for a sharper cutoff

% Normalize the cutoff frequency w.r.t Nyquist frequency (half the sampling rate)
Wn = hpCutoff / (fs/2);

% Design a Butterworth high-pass filter
[hpB, hpA] = butter(hpOrder, Wn, 'high');

% Display the filter coefficients
disp('Filter numerator coefficients of the HPF(b):');
disp(hpB);
disp('Filter denominator coefficients of the HPF(a):');
disp(hpA);

% Apply the high-pass filter to the data
filteredData_HP = filtfilt(hpB, hpA, filteredData_notch);

% Plot the filtered data
figure(13);
plot(samples, filteredData_HP);
xlabel('Sample Index');
ylabel('Filtered Data Value (after LPF,NOTCH AND HPF)');
title('Filtered heartbeat Data using LPF and then notch at 60 Hz and then HPF for DC noise');

F_LP_notch_HP=fft(filteredData_HP,np);
twoSidedPowerSpectrum_LP_notch=abs(F_LP_notch_HP/np);
frequencyForTwoSidedSpectrum_LP_notch_HP=-np/2:np/2-1;

% Plotting the two-sided FFT
figure(14)
plot(frequencyForTwoSidedSpectrum_LP_notch_HP,twoSidedPowerSpectrum_LP_notch);
title('two-Sided FFT of heartbeat Data Signal after LPF and notch at 60 Hz and then HPF for DC noise');
xlabel('non arranged frequency (Hz)');
ylabel('power');

% Plotting the one-sided FFT
oneSidedPowerSpectrum_LP_notch_HP=twoSidedPowerSpectrum_LP_notch(1:np/2+1);
oneSidedPowerSpectrum_LP_notch_HP(2:end-1)=2*oneSidedPowerSpectrum_LP_notch_HP(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(15)
plot(frequency,oneSidedPowerSpectrum_LP_notch_HP)
title('One-Sided FFT of heartbeat Data Signal after LPF and notch at 60 Hz and then HPF for DC noise');
xlabel('arranged frequency (Hz)');
ylabel('power');
