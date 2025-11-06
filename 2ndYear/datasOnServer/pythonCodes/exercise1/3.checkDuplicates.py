#!/bin/python3

fruits = ("Mango", "cherry", "Apple", "banana", "Apple", "peach", "orange")
checkDuplis = list()
newFruits = tuple()

print("Before removing : ",fruits)

for i in fruits:
    if i not in checkDuplis:
        checkDuplis.append(i)
    else:
        print("Removing ", i)
        continue
    newFruits = newFruits + (i,)

fruits = newFruits
del newFruits
del checkDuplis
print("After removing : ", fruits)
print(type(fruits))
