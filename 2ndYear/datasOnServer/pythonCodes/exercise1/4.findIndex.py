#!/bin/python3

fruits = ("Mango", "cherry", "Apple", "banana", "Apple", "peach", "orange")
fruit_to_find = "banana"

for i in range(len(fruits)):
    if(fruits[i] == fruit_to_find):
        print(fruit_to_find, "found in index", i)
