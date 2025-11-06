#!/bin/python3

fruits = ["Mango", "cherry", "Apple", "banana", "Apple", "peach", "orange"]
output = tuple()

for i in fruits:
    output = output + (i,)

print(output)
print(type(output))
