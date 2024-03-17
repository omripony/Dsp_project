% Specify the path to the data file
filename = 'raw_data.txt';

% Use the readmatrix function to import the data
data = readmatrix(filename);
% Display the imported data
disp('Imported Data:');
disp(data);

fs = 800; % Sampling frequency in Hz
samples = 1:length(data)

figure(1);
plot(samples, data);
xlabel('Sample Index'); % Labeling the x-axis as 'Sample Index'
ylabel('ECG Data Value');
title('Plot of Data vs. Samples'); % Adding a title to the plot

signalLengthInSamples=length(data);
np = 2^nextpow2(signalLengthInSamples);
F=fft(data,np);
twoSidedPowerSpectrum=abs(F/np);
frequencyForTwoSidedSpectrum=-np/2:np/2-1;

% Plotting the two-sided FFT
figure(2)
plot(frequencyForTwoSidedSpectrum,twoSidedPowerSpectrum);
title('two-Sided FFT of ECG Data Signal');
xlabel('non arranged frequency (Hz)');
ylabel('power');

% Plotting the one-sided FFT
oneSidedPowerSpectrum=twoSidedPowerSpectrum(1:np/2+1);
oneSidedPowerSpectrum(2:end-1)=2*oneSidedPowerSpectrum(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);
figure(3)
plot(frequency,oneSidedPowerSpectrum)
title('One-Sided FFT of ECG Data Signal');
xlabel('arranged frequency (Hz)');
ylabel('power');

figure(4)
spectrogram(data, 256, 250, 256, fs, 'yaxis');
title('Spectrogram of of ECG Data Signal');
colormap('jet'); % Use the 'jet' colormap for better visibility
colorbar;
caxis([-100 20]) % Adjust the color axis to improve contrast
