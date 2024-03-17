clear;
clc;
close all;
fs = 800;
% Open the text file
fileID = fopen('HB1_800.txt', 'r');

% Read the numbers from the file
numbers = textscan(fileID, '%f');

% Close the file
fclose(fileID);

% Store the numbers in an array
array = numbers{1};

np = 2^nextpow2(length(array));
F = fft(array,np);
two_sided = abs(F/np);

one_sided = two_sided(1:np/2+1);
one_sided(2:end-1) = 2*one_sided(2:end-1);
freq = fs*(0:np/2)/(np);



array_filtered_low = filter(low_pass,array);
array_filtered = filter(high_pass,array_filtered_low);
%a = 50000;
figure; subplot(211);plot(array);
subplot(212); plot(array_filtered);

figure;subplot(211);plot(freq,abs(one_sided));

np = 2^nextpow2(length(array_filtered));
F = fft(array_filtered,np);
two_sided = abs(F/np);

one_sided = two_sided(1:np/2+1);
one_sided(2:end-1) = 2*one_sided(2:end-1);
freq = fs*(0:np/2)/(np);
subplot(212);plot(freq,abs(one_sided));
title("Power spectrum of HB");
xlabel("freq. [Hz]");
ylabel("Magnitude");


