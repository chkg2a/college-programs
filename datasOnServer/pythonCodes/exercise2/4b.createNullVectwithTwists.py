import numpy as np

size = 10
replace = 5
output = [1 if i == replace else None for i in range(size)]
null_vect = np.zeros(size,dtype=int)
null_vect[5] = 1
print(output)
print(null_vect)
