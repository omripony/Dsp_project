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

% Plotting the one-sided FFT
oneSidedPowerSpectrum=twoSidedPowerSpectrum(1:np/2+1);
oneSidedPowerSpectrum(2:end-1)=2*oneSidedPowerSpectrum(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);
figure(3)
plot(frequency,oneSidedPowerSpectrum)
title('One-Sided FFT of heartbeat Data Signal');
xlabel('arranged frequency (Hz)');
ylabel('power');

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

% Plotting the one-sided FFT
oneSidedPowerSpectrum_LP=twoSidedPowerSpectrum_LP(1:np/2+1);
oneSidedPowerSpectrum_LP(2:end-1)=2*oneSidedPowerSpectrum_LP(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(7)
plot(frequency,oneSidedPowerSpectrum_LP)
title('One-Sided FFT of heartbeat Data Signal after LPF');
xlabel('arranged frequency (Hz)');
ylabel('power');

%% second filter-notch on the big delta at 60 Hz
load 'notch_coeff.mat';
filteredData_notch = sosfilt(SOS_notch, filteredData_LP);
filteredData_notch = filteredData_notch * G(end);

% Apply the notch filter to the data

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

%% third filter-HPF on the noise before 20 Hz
load HP_coeff.mat;

% Apply the SOS filter to the data
filteredData_LP_notch_HP = sosfilt(SOS_HP, filteredData_notch);
filteredData_LP_notch_HP = filteredData_LP_notch_HP * G(end);

% Apply the high-pass filter to the data

% Plot the filtered data
figure(13);
plot(samples, filteredData_LP_notch_HP);
xlabel('Sample Index');
ylabel('Filtered Data Value (after LPF,NOTCH AND HPF)');
title('Filtered heartbeat Data using LPF and then notch at 60 Hz and then HPF for low frequencies noise');

F_LP_notch_HP=fft(filteredData_LP_notch_HP,np);
twoSidedPowerSpectrum_LP_notch=abs(F_LP_notch_HP/np);
frequencyForTwoSidedSpectrum_LP_notch_HP=-np/2:np/2-1;

% Plotting the two-sided FFT
figure(14)
plot(frequencyForTwoSidedSpectrum_LP_notch_HP,twoSidedPowerSpectrum_LP_notch);
title('two-Sided FFT of heartbeat Data Signal after LPF and notch at 60 Hz and then HPF for low frequencies noise');
xlabel('non arranged frequency (Hz)');
ylabel('power');

% Plotting the one-sided FFT
oneSidedPowerSpectrum_LP_notch_HP=twoSidedPowerSpectrum_LP_notch(1:np/2+1);
oneSidedPowerSpectrum_LP_notch_HP(2:end-1)=2*oneSidedPowerSpectrum_LP_notch_HP(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(15)
plot(frequency,oneSidedPowerSpectrum_LP_notch_HP)
title('One-Sided FFT of heartbeat Data Signal after LPF and notch at 60 Hz and then HPF for low frequencies noise');
xlabel('arranged frequency (Hz)');
ylabel('power');
