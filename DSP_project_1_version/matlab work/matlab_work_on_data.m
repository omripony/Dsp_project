% Specify the path to the data file
filename = 'raw_data.txt';

% Use the readmatrix function to import the data
data = readmatrix(filename);

% Display the imported data
disp('Imported Data:');
disp(data);
