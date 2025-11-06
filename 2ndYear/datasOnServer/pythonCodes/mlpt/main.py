import matplotlib.pyplot as plt
import random

arr = [random.randint(0,50) for _ in range(50)]
y = [random.randint(0,50) for _ in range(50)]


def bubble_sort(x):
    for _ in range(len(x)-1):
        swapped = False
        for j in range(len(x)-1):
            if x[j] > x[j+1]:
                swapped = True
                x[j] ^= x[j+1]
                x[j+1] ^= x[j]
                x[j] ^= x[j+1]
        if swapped == False:
            return x

def selection_sort(x):
    for i in range(len(x)-1):
        minI = i;
        for j in range(i,len(x)):
            if x[minI] > x[j]:
                x[minI] ^= x[j]
                x[j] ^= x[minI]
                x[minI] ^= x[j]

def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i -1
        while j>= 0 and arr[j] > key:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key

def merge(arr, left, mid, right):
    n1 = mid - left + 1
    n2 = right - mid

    # Create temp arrays
    L = [0] * n1
    R = [0] * n2

    # Copy data to temp arrays L[] and R[]
    for i in range(n1):
        L[i] = arr[left + i]
    for j in range(n2):
        R[j] = arr[mid + 1 + j]

    i = 0  # Initial index of first subarray
    j = 0  # Initial index of second subarray
    k = left  # Initial index of merged subarray

    # Merge the temp arrays back
    # into arr[left..right]
    while i < n1 and j < n2:
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1

    # Copy the remaining elements of L[],
    # if there are any
    while i < n1:
        arr[k] = L[i]
        i += 1
        k += 1

    # Copy the remaining elements of R[], 
    # if there are any
    while j < n2:
        arr[k] = R[j]
        j += 1
        k += 1

def merge_sort(arr, left, right):
    if left < right:
        mid = (left + right) // 2

        merge_sort(arr, left, mid)
        merge_sort(arr, mid + 1, right)
        merge(arr, left, mid, right)

# Driver code
if __name__ == "__main__":
    print("Given array is")
    print(arr)

    merge_sort(arr, 0, len(arr) - 1)

    print("\nSorted array is")
    print(arr)


# plt.show()
