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
figure(2)
plot(frequency,oneSidedPowerSpectrum)
title('One-Sided FFT of heartbeat Data Signal');
xlabel('arranged frequency (Hz)');
ylabel('power');

%% first filter-LP
load LP_coeff.mat;

% Apply the SOS filter to the data
filteredData_LP = sosfilt(SOS_LP, data);
filteredData_LP = filteredData_LP * G_LP(end);

% Now you can plot the filtered data
figure(3);
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

figure(4)
plot(frequency,oneSidedPowerSpectrum_LP)
title('One-Sided FFT of heartbeat Data Signal after LPF');
xlabel('arranged frequency (Hz)');
ylabel('power');

%% second filter-notch on the big delta at 60 Hz
load 'notch_coeff.mat';
filteredData_notch = sosfilt(SOS_notch, filteredData_LP);
filteredData_notch = filteredData_notch * G_notch(end);

% Plot the filtered data
figure(5);
plot(samples, filteredData_notch);
xlabel('Sample Index');
ylabel('Filtered Data Value');
title('Filtered heartbeat Data using LPF and then notch at 60 Hz');

F_LP_notch=fft(filteredData_notch,np);
twoSidedPowerSpectrum_LP_notch=abs(F_LP_notch/np);
frequencyForTwoSidedSpectrum_LP_notch=-np/2:np/2-1;

% Plotting the one-sided FFT
oneSidedPowerSpectrum_LP_notch=twoSidedPowerSpectrum_LP_notch(1:np/2+1);
oneSidedPowerSpectrum_LP_notch(2:end-1)=2*oneSidedPowerSpectrum_LP_notch(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(6)
plot(frequency,oneSidedPowerSpectrum_LP_notch)
title('One-Sided FFT of heartbeat Data Signal after LPF and notch at 60 Hz');
xlabel('arranged frequency (Hz)');
ylabel('power');

%% third filter-HPF on the noise before 20 Hz
load HP_coeff.mat;

% Apply the SOS filter to the data
filteredData_LP_notch_HP = sosfilt(SOS_HP, filteredData_notch);
filteredData_LP_notch_HP = filteredData_LP_notch_HP * G_HP(end);

% Apply the high-pass filter to the data

% Plot the filtered data
figure(7);
plot(samples, filteredData_LP_notch_HP);
xlabel('Sample Index');
ylabel('Filtered Data Value (after LPF,NOTCH AND HPF)');
title('Filtered heartbeat Data using LPF and then notch at 60 Hz and then HPF for low frequencies noise');

F_LP_notch_HP=fft(filteredData_LP_notch_HP,np);
twoSidedPowerSpectrum_LP_notch=abs(F_LP_notch_HP/np);
frequencyForTwoSidedSpectrum_LP_notch_HP=-np/2:np/2-1;

% Plotting the one-sided FFT
oneSidedPowerSpectrum_LP_notch_HP=twoSidedPowerSpectrum_LP_notch(1:np/2+1);
oneSidedPowerSpectrum_LP_notch_HP(2:end-1)=2*oneSidedPowerSpectrum_LP_notch_HP(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(8)
plot(frequency,oneSidedPowerSpectrum_LP_notch_HP)
title('One-Sided FFT of heartbeat Data Signal after LPF and notch at 60 Hz and then HPF for low frequencies noise');
xlabel('arranged frequency (Hz)');
ylabel('power');

%% find peaks
% Detect peaks to find heartbeats
[peaks, locs] = findpeaks(filteredData_LP_notch_HP, 'MINPEAKDISTANCE', round(0.5*fs));

% Plot peaks
figure(9);
plot(samples, filteredData_LP_notch_HP, locs, peaks, 'rv');
xlabel('Sample Index');
ylabel('Filtered Heartbeat Data Value');
title('Detected Heartbeats');
legend('Filtered Signal', 'Detected Peaks');

% Calculate time between peaks (R-R interval)
RR_interval = diff(locs)/fs; % in seconds

% Calculate pulse
pulse = (1./RR_interval)*60; % beats per minute (BPM)

% Output the calculated pulse
disp('Calculated Pulse:');
disp(pulse);

% Plot peaks
figure(9);
plot(samples, filteredData_LP_notch_HP, locs, peaks, 'rv');
xlabel('Sample Index');
ylabel('Filtered Heartbeat Data Value');
title('Detected Heartbeats');
legend('Filtered Signal', 'Detected Peaks');

% Annotate pulse on the graph
for i = 1:length(pulse)
    % Position for annotation: halfway between consecutive peaks for readability
    % You might adjust the positioning based on your preference
    if i < length(locs) % Ensure there's a next peak for positioning
        textPos = (locs(i) + locs(i+1)) / 2;
    else
        textPos = locs(i);
    end
    % Annotate the graph with pulse rate
    text(textPos, peaks(i), sprintf('%.2f BPM', pulse(i)), 'VerticalAlignment', 'bottom', 'HorizontalAlignment', 'center');
end

% Since pulse is calculated based on RR intervals, there's one less pulse value than peaks
% You might want to average the pulse rates or handle this discrepancy based on your application needs.

% Output the calculated pulse
disp('Calculated Pulse:');
disp(pulse);
