#!/bin/python3

fruits = ("Mango", "cherry", "Apple", "banana", "Apple", "peach", "orange")
fruit = input("Enter a fruit to check: ")

if fruit in fruits:
    print("Fruit already exist")
else:
    print("Inserting " + fruit + " into the tuple")
    fruits = fruits + (fruit,)

print(fruits)
print(type(fruits))
