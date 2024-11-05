#!/bin/python3

# Appending an item
def appendTuple(T,x):
    L = list(T)
    L.append(x)
    T = tuple(L)
    return T

def insertTuple(T,i,x):
    L = list(T)
    L.insert(i,x)
    T = tuple(L)
    return T

def modifyTuple(T,i,x):
    L = list(T)
    L[i] = x
    T = tuple(L)
    return T

def popTuple(T):
    L = list(T)
    L.pop()
    T = tuple(L)
    return T

if __name__ == "__main__":
    T = ("Mango", "cherry", "Apple", "banana", "Apple", "peach", "orange")
    print(T)
    newT = appendTuple(T,"kiwi")
    newT = insertTuple(newT,1,"mango")
    newT = modifyTuple(newT,3,"pineapple")
    newT = popTuple(newT)
    print(newT)
