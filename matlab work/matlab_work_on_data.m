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
xlabel('Sample Index', 'Interpreter', 'latex', 'FontSize', 14); % Labeling the x-axis as 'Sample Index'
ylabel('heartbeat Data Value', 'Interpreter', 'latex', 'FontSize', 14);
title('Plot of heartbeat Data vs. Samples', 'Interpreter', 'latex', 'FontSize', 14); % Adding a title to the plot
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'1-Plot of heartbeat Data vs Samples.png'); % Saves the current figure to a PNG file

signalLengthInSamples=length(data);
np = 2^nextpow2(signalLengthInSamples);
F=fft(data,np);
twoSidedPowerSpectrum=abs(F/np);

% Plotting the one-sided FFT
oneSidedPowerSpectrum=twoSidedPowerSpectrum(1:np/2+1);
oneSidedPowerSpectrum(2:end-1)=2*oneSidedPowerSpectrum(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);
figure(2)
plot(frequency,oneSidedPowerSpectrum)
title('One-Sided FFT of heartbeat Data Signal', 'Interpreter', 'latex', 'FontSize', 14);
xlabel('arranged frequency (Hz)', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('power', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'2-One-Sided FFT of heartbeat Data Signal.png'); % Saves the current figure to a PNG file

%% first filter-LP
load LP_coeff.mat;

% Apply the SOS filter to the data
filteredData_LP = sosfilt(SOS_LP, data);
filteredData_LP = filteredData_LP * G_LP(end);

% Now you can plot the filtered data
figure(3);
plot(samples, filteredData_LP);
xlabel('Sample Index', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('Filtered heartbeat Data Value', 'Interpreter', 'latex', 'FontSize', 14);
title('Filtered heartbeat Data using IIR LPF', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'3-Filtered heartbeat Data using IIR LPF.png'); % Saves the current figure to a PNG file

F_LP=fft(filteredData_LP,np);
twoSidedPowerSpectrum_LP=abs(F_LP/np);

% Plotting the one-sided FFT
oneSidedPowerSpectrum_LP=twoSidedPowerSpectrum_LP(1:np/2+1);
oneSidedPowerSpectrum_LP(2:end-1)=2*oneSidedPowerSpectrum_LP(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(4)
plot(frequency,oneSidedPowerSpectrum_LP)
title('One-Sided FFT of heartbeat Data Signal after LPF', 'Interpreter', 'latex', 'FontSize', 14);
xlabel('arranged frequency (Hz)', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('power', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'4-One-Sided FFT of heartbeat Data Signal after LPF.png'); % Saves the current figure to a PNG file

%% second filter-notch on the big delta at 60 Hz
load 'notch_coeff.mat';
filteredData_notch = sosfilt(SOS_notch, filteredData_LP);
filteredData_notch = filteredData_notch * G_notch(end);

% Plot the filtered data
figure(5);
plot(samples, filteredData_notch);
xlabel('Sample Index', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('Filtered Data Value', 'Interpreter', 'latex', 'FontSize', 14);
title('Filtered heartbeat Data using LPF and then notch at 60 Hz', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'5-Filtered heartbeat Data using LPF and then notch at 60 Hz.png'); % Saves the current figure to a PNG file

F_LP_notch=fft(filteredData_notch,np);
twoSidedPowerSpectrum_LP_notch=abs(F_LP_notch/np);

% Plotting the one-sided FFT
oneSidedPowerSpectrum_LP_notch=twoSidedPowerSpectrum_LP_notch(1:np/2+1);
oneSidedPowerSpectrum_LP_notch(2:end-1)=2*oneSidedPowerSpectrum_LP_notch(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(6)
plot(frequency,oneSidedPowerSpectrum_LP_notch)
title('One-Sided FFT of heartbeat Data Signal after LPF and notch at 60 Hz', 'Interpreter', 'latex', 'FontSize', 14);
xlabel('arranged frequency (Hz)', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('power', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'6-One-Sided FFT of heartbeat Data Signal after LPF and notch at 60 Hz.png'); % Saves the current figure to a PNG file

%% third filter-HPF on the noise before 20 Hz
load HP_coeff.mat;

% Apply the SOS filter to the data
filteredData_LP_notch_HP = sosfilt(SOS_HP, filteredData_notch);
filteredData_LP_notch_HP = filteredData_LP_notch_HP * G_HP(end);

% Apply the high-pass filter to the data

% Plot the filtered data
figure(7);
plot(samples, filteredData_LP_notch_HP);
xlabel('Sample Index', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('Filtered Data Value (after LPF,NOTCH AND HPF)', 'Interpreter', 'latex', 'FontSize', 14);
title('Filtered heartbeat Data using LPF,notch and HPF', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'7-Filtered heartbeat Data using LPF,notch and HPF.png'); % Saves the current figure to a PNG file

F_LP_notch_HP=fft(filteredData_LP_notch_HP,np);
twoSidedPowerSpectrum_LP_notch_HP=abs(F_LP_notch_HP/np);

% Plotting the one-sided FFT
oneSidedPowerSpectrum_LP_notch_HP=twoSidedPowerSpectrum_LP_notch_HP(1:np/2+1);
oneSidedPowerSpectrum_LP_notch_HP(2:end-1)=2*oneSidedPowerSpectrum_LP_notch_HP(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(8)
plot(frequency,oneSidedPowerSpectrum_LP_notch_HP)
title('One-Sided FFT of heartbeat Data Signal after LPF,notch filter and then HPF', 'Interpreter', 'latex', 'FontSize', 14);
xlabel('arranged frequency (Hz)', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('power', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'8-One-Sided FFT of heartbeat Data Signal after LPF,notch filter and then HPF.png'); % Saves the current figure to a PNG file

%% ABS OF THE FILTERED SIGNAL IN TD
abs_of_the_filtered_signal=abs(filteredData_LP_notch_HP);

figure(9);
plot(samples, abs_of_the_filtered_signal);
xlabel('Sample Index', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('absulute value of the Filtered signal Data Values', 'Interpreter', 'latex', 'FontSize', 14);
title('absulute value of the Filtered signal Data Values', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'9-absulute value of the Filtered signal Data Values.png'); % Saves the current figure to a PNG file

F_after_after_abs=fft(abs_of_the_filtered_signal,np);
twoSidedPowerSpectrum_after_abs=abs(F_after_after_abs/np);

% Plotting the one-sided FFT
oneSidedPowerSpectrum_after_abs=twoSidedPowerSpectrum_after_abs(1:np/2+1);
oneSidedPowerSpectrum_after_abs(2:end-1)=2*oneSidedPowerSpectrum_after_abs(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(10)
plot(frequency,oneSidedPowerSpectrum_after_abs)
title('One-Sided FFT of the filtered heartbeat Data Signal and after abs', 'Interpreter', 'latex', 'FontSize', 14);
xlabel('arranged frequency (Hz)', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('power', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'10-One-Sided FFT of the filtered heartbeat Data Signal and after abs.png'); % Saves the current figure to a PNG file

%% digital filter to smooth the abs of the filtered signal  

filtered_values = digital_filter(abs_of_the_filtered_signal, 2);
figure(11);
plot(samples, filtered_values);
xlabel('Sample Index', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('filtered signal after digital filter', 'Interpreter', 'latex', 'FontSize', 14);
title('filtered signal after digital filter', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'11-filtered signal after digital filter.png'); % Saves the current figure to a PNG file

F_after_after_abs_and_digital_filter=fft(filtered_values,np);
twoSidedPowerSpectrum_after_abs=abs(F_after_after_abs_and_digital_filter/np);

% Plotting the one-sided FFT
oneSidedPowerSpectrum_after_abs_and_digital_filter=twoSidedPowerSpectrum_after_abs(1:np/2+1);
oneSidedPowerSpectrum_after_abs_and_digital_filter(2:end-1)=2*oneSidedPowerSpectrum_after_abs_and_digital_filter(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(12)
plot(frequency,oneSidedPowerSpectrum_after_abs_and_digital_filter)
title('One-Sided FFT of the filtered heartbeat Data Signal and after abs and digital filter', 'Interpreter', 'latex', 'FontSize', 14);
xlabel('arranged frequency (Hz)', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('power', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'12-One-Sided FFT of the filtered heartbeat Data Signal and after abs and digital filter.png'); % Saves the current figure to a PNG file

%% smooth the output of the digital filter using another LPF 

load LP_2_coeff.mat;
smooth_signal = sosfilt(SOS_LP_2, filtered_values);
smooth_signal = smooth_signal * G_LP_2(end);

figure(13);
plot(samples, smooth_signal,'b');
xlabel('Sample Index', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('Smoothed Signal Value', 'Interpreter', 'latex', 'FontSize', 14);
title('Smoothed Signal after Envelope Detector and another LPF', 'Interpreter', 'latex', 'FontSize', 14);
hold on;
Threshold1 = 1.5E7; % This is an example value; you may need to adjust it based on your signal
yline(Threshold1, '--r'); % Add a red dashed line at the threshold value
hold off;
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'13-Smoothed Signal after Envelope Detector and another LPF.png'); % Saves the current figure to a PNG file

F_abs_envelop_LFP = fft(smooth_signal, np);
twoSidedPowerSpectrum_abs_envelop_LPF=abs(F_abs_envelop_LFP/np);

% Plotting the one-sided FFT
oneSidedPowerSpectrum_abs_envelop_LPF=twoSidedPowerSpectrum_abs_envelop_LPF(1:np/2+1);
oneSidedPowerSpectrum_abs_envelop_LPF(2:end-1)=2*oneSidedPowerSpectrum_abs_envelop_LPF(2:end-1);
frequency = fs/2*linspace(0,1,np/2+1);

figure(14)
plot(frequency,oneSidedPowerSpectrum_abs_envelop_LPF)
title('One-Sided FFT of the filtered heartbeat Data Signal after abs and envelop detector and another LPF', 'Interpreter', 'latex', 'FontSize', 14);
xlabel('arranged frequency (Hz)', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('power', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size [left bottom width height]
saveas(gcf,'14-Smoothed Signal after Envelope Detector and another LPF in frequency domain .png'); % Saves the current figure to a PNG file

%% After applying filters and possibly the envelope detector
% Call peak_count to find peaks in the smoothed signal
[peak_count_result, peak_idx_array] = peak_count(smooth_signal, Threshold1);

% Display the count of detected peaks
disp(['Detected Peaks: ', num2str(peak_count_result)]);

% Call time_peaks to analyze the time between peaks
average_interval = time_peaks(peak_idx_array, fs);

% Calculate heart rate from detected peaks
if length(peak_idx_array) > 1
    peak_intervals = diff(peak_idx_array) / fs; % Time between peaks in seconds
    average_interval = mean(peak_intervals); % Average time interval between peaks
    heart_rate = 1 / average_interval * 60; % Convert to beats per minute (bpm)
    disp(['Estimated Heart Rate: ', num2str(heart_rate), ' bpm']);
else
    disp('Not enough peaks detected to estimate heart rate.');
end

%% 
figure(15); 
plot(samples, smooth_signal,'b'); % Plotting the smoothed signal
hold on; % Hold on to plot additional markers

% Assuming peak_idx_array contains the indices of all detected peaks
for i = 1:length(peak_idx_array)
    plot(peak_idx_array(i), smooth_signal(peak_idx_array(i)), 'rx', 'MarkerSize', 10, 'LineWidth', 2); % Mark peak with red 'x'
end

xlabel('Sample Index', 'Interpreter', 'latex', 'FontSize', 14);
ylabel('Smoothed Signal Value', 'Interpreter', 'latex', 'FontSize', 14);
title('Smoothed Signal with Detected Peaks', 'Interpreter', 'latex', 'FontSize', 14);
set(gcf, 'Position', [100, 100, 800, 600]); % Set figure position and size
hold off; % Release the figure for further commands



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function [peak_count, peak_idx_array] = peak_count(filtered_arr, Threshold1)
    peak_count = 0;
    peak_idx_array = [];  % This will store the indices of the peaks
    
    for idx = 2:length(filtered_arr)-1
        % Check if the current point is a peak: higher than the threshold1 and its neighbors
        if (filtered_arr(idx) > Threshold1) && ...
           (filtered_arr(idx) > filtered_arr(idx-1)) && ...
           (filtered_arr(idx) > filtered_arr(idx+1))
           
            peak_count = peak_count + 1;  % Increment peak counter
            peak_idx_array = [peak_idx_array, idx];  % Store the peak index
        end
    end
end



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

function average_interval = time_peaks(peak_idx_array, fs)
    % Calculate time intervals between consecutive peaks
    if length(peak_idx_array) > 1
        peak_intervals = diff(peak_idx_array) / fs; % Time between peaks in seconds
        average_interval = mean(peak_intervals); % Average time interval between peaks
        
        % Displaying the calculated intervals for your reference
        disp(['Average Interval Between Peaks: ', num2str(average_interval), ' seconds']);
        
        % For each interval, display or process as needed
        for i = 1:length(peak_intervals)
            disp(['Interval ', num2str(i), ': ', num2str(peak_intervals(i)), ' seconds']);
        end
    else
        disp('Not enough peaks detected to calculate intervals.');
        average_interval = NaN; % Not a Number, indicating insufficient data
    end
end


function filtered_arr = digital_filter(filtered_arr, num)
    for idx = 2:length(filtered_arr)
        if filtered_arr(idx) < filtered_arr(idx - 1)
            filtered_arr(idx) = filtered_arr(idx - 1) - num;
        end
    end
end
