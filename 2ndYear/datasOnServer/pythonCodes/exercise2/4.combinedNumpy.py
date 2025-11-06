import numpy as np

print("Numpy arr filled with zeroes and ones")
arr_size = 10
all_zeros = np.zeros(arr_size,dtype=int)
all_ones = np.ones(arr_size,dtype=int)
print(all_zeros)
print(all_ones)

print("\nNull vector but fifth val is 1")
null_vect = np.zeros(arr_size,dtype=int)
null_vect[5-1] = 1
print(null_vect)

print("\nVector ranging from 10 to 49")
range_vector = np.arange(10,50)
print(range_vector)

print("\n3x3 Matrix from 0 to 8")
sizeX = 3
sizeY = 3

matrix = np.arange(sizeX*sizeY).reshape(sizeX,3)
print(matrix)
