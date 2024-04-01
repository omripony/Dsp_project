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
Threshold = 5.6E6; % This is an example value; you may need to adjust it based on your signal
yline(Threshold, '--r'); % Add a red dashed line at the threshold value
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
[peak_count_result, peak_idx_array] = peak_count(smooth_signal, Threshold);

% Display the count of detected peaks
disp(['Detected Peaks: ', num2str(peak_count_result)]);

% Call time_peaks to analyze the time between peaks

% Calculate heart rate from detected peaks
if length(peak_idx_array) > 1
    peak_intervals = diff(peak_idx_array) / fs; % Time between peaks in seconds
    average_interval = mean(peak_intervals); % Average time interval between peaks
    heart_rate = 1 / average_interval * 60; % Convert to beats per minute (bpm)
    disp(['Estimated Heart Rate: ', num2str(heart_rate), ' bpm']);
else
    disp('Not enough peaks detected to estimate heart rate.');
end

function [peak_count, peak_idx_array] = peak_count(filtered_arr, Threshold)
    peak_count = 0;
    flag = 0;
    peak_idx = 0;
    prev_peak_idx = 0;
    peak_idx_array = [];  % This will store the indices of the peaks
    sample_cnt = 0;  % Initialize sample count

    for idx = 1:length(filtered_arr)
        % Detect the rising edge of the peak
        if (filtered_arr(idx) >= Threshold && flag == 0)
            peak_count = peak_count + 1;  % Increment peak counter
            prev_peak_idx = peak_idx;  % Save the previous peak index
            peak_idx = idx;  % Update the current peak index
            peak_idx_array = [peak_idx_array, idx];  % Store the peak index
            flag = 1;  % Set the flag indicating a peak has started
        % Detect the falling edge of the peak
        elseif (filtered_arr(idx) < Threshold)
            flag = 0;  % Reset the flag
        end

        % Increment sample count and check if one second has passed
        sample_cnt = sample_cnt + 1;
        if (sample_cnt == 800)  % Assuming fs = 800 Hz
            sample_cnt = 0;  % Reset sample count after one second
            % Here you would call your time measurement function
            % time_peaks();
        end
    end
end

function time_peaks(peak_idx_array, fs)
    persistent prev_s1_delta prev_s12_delta peak_cnt s1_delta s12_delta;
    if isempty(prev_s1_delta)
        prev_s1_delta = 0;
        prev_s12_delta = 0;
        peak_cnt = 0;
        s1_delta = 0;
        s12_delta = 0;
    end

    % Assuming peak_idx_array is a two-row array where the first row contains the index
    % and the second row contains the peak type (1 for S1, 2 for S2)
    for i = 2:size(peak_idx_array, 2)
        % Update deltas
        if peak_idx_array(2, i) == 1 % if current peak is S1
            s1_delta = peak_idx_array(1, i) - peak_idx_array(1, i-1);
            prev_s1_delta = s1_delta;
        else % if current peak is S2
            s12_delta = peak_idx_array(1, i) - peak_idx_array(1, i-1);
            prev_s12_delta = s12_delta;
        end
        
        % Increment peak count
        peak_cnt = peak_cnt + 1;
        
        % Calculate BPM for primary peaks (S1-S1)
        if mod(peak_cnt, 2) == 0 && mod(peak_cnt, 2) == 0
            bps = (fs / s1_delta); % Calculate beats per second
            bpm = bps * 60; % Convert to beats per minute
            fprintf('S1 peak index = %d S1 peak index = %d\n', peak_idx_array(1, i-1), peak_idx_array(1, i));
            fprintf('s1_delta = %.2f [0.5msec]\n', s1_delta);
            fprintf('bps = %.2f bpm = %.2f\n', bps, bpm);
        % Calculate BPM for secondary peaks (S1-S2)
        elseif mod(peak_cnt, 2) ~= 0 && peak_cnt > 1
            fprintf('S1 peak index = %d S2 peak index = %d\n', peak_idx_array(1, i-1), peak_idx_array(1, i));
            fprintf('s12_delta = %.2f [0.5msec]\n', s12_delta);
        end
    end
end

function filtered_arr = digital_filter(filtered_arr, num)
    % MATLAB arrays are 1-based, so we start the loop from 2.
    for idx = 2:length(filtered_arr)
        if filtered_arr(idx) < filtered_arr(idx - 1)
            filtered_arr(idx) = filtered_arr(idx - 1) - num;
        end
    end
end
