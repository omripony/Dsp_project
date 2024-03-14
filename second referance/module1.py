
with open('HB1_800.txt') as file:
    contents = file.read().split()


float_list = [float(x) for x in contents]
print(float_list)