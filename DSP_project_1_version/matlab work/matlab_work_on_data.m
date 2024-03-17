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

load LP_coeff.mat;

for i = 1:size(SOS, 1)
    filteredData_LP = filteredData_LP * G(i);
end
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
title('One-Sided FFT of heartbeat Data Signal');
xlabel('arranged frequency (Hz)');
ylabel('power');

% figure(8)
% spectrogram(filteredData_LP, 256, 250, 256, fs, 'yaxis');
% title('Spectrogram of of heartbeat Data Signal');
% colormap('jet'); % Use the 'jet' colormap for better visibility
% colorbar;
% caxis([-100 20]) % Adjust the color axis to improve contrast