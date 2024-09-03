#include <algorithm>
#include <chrono>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int* addRear(int* oldArray, int& size, int value) {
    // Allocate new array with increased size
    int* newArray = new int[size + 1];

    // Copy elements from the old array to the new array
    for (int i = 0; i < size; ++i) {
        newArray[i] = oldArray[i];
    }

    // Add the new element at the rear
    newArray[size] = value;

    // Deallocate the old array

    // Update the size
    size += 1;

    return newArray;
}

// Function to resize the array and add an element at the front
int* addFront(int* oldArray, int& size, int value) {
    // Allocate new array with increased size
    int* newArray = new int[size + 1];

    // Add the new element at the front
    newArray[0] = value;

    // Copy elements from the old array to the new array
    for (int i = 0; i < size; ++i) {
        newArray[i + 1] = oldArray[i];
    }

    // Deallocate the old array
    delete[] oldArray;

    size += 1;

    return newArray;
}

int main(int argc, char *argv[]) {
  auto start = std::chrono::high_resolution_clock::now();
  srand(time(0));

  int array[100000000];
  for(int i = 0; i < 100000000; i++){
    array[i] = i;
  }

  cout << "Adding 0 to 100000000 elements" << endl;
  cout << "Array List : Adding Element in the Rear O(1)" << endl;

  std::cout << std::endl;
  auto end = std::chrono::high_resolution_clock::now();
  auto duration_s =
      std::chrono::duration_cast<std::chrono::seconds>(end - start);
  std::cout << "Execution time: " << duration_s.count() << " seconds "
            << std::endl;
  auto duration_ms =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << "Execution time: " << duration_ms.count() << " milliseconds "
            << std::endl;
  auto duration_ns =
      std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
  std::cout << "Execution time: " << duration_ns.count() << " nanoseconds ";

  return 0;
}
