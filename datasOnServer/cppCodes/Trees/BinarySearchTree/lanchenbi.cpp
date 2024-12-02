#include <iostream>

using namespace std;

int* flattenArray(int rows, int cols, int array[100][100]) {
    int* flattenedArray = new int[rows * cols];
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            flattenedArray[index++] = array[i][j];
        }
    }
    return flattenedArray;
}

int main() {
    int rows1, cols1, rows2, cols2;
    int array1[100][100], array2[100][100];

    cout << "Enter rows and columns for the first 2D array: ";
    cin >> rows1 >> cols1;
    cout << "Enter elements for the first 2D array:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> array1[i][j];
        }
    }

    cout << "Enter rows and columns for the second 2D array: ";
    cin >> rows2 >> cols2;
    cout << "Enter elements for the second 2D array:\n";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> array2[i][j];
        }
    }

    int* flattenedArray1 = flattenArray(rows1, cols1, array1);
    int* flattenedArray2 = flattenArray(rows2, cols2, array2);

    int combinedSize = (rows1 * cols1) + (rows2 * cols2);
    int* combinedArray = new int[combinedSize];
    int index = 0;

    for (int i = 0; i < rows1 * cols1; i++) {
        combinedArray[index++] = flattenedArray1[i];
    }
    for (int i = 0; i < rows2 * cols2; i++) {
        combinedArray[index++] = flattenedArray2[i];
    }

    cout << "Combined 1D array:\n";
    for (int i = 0; i < combinedSize; i++) {
        cout << combinedArray[i] << " ";
    }
    cout << endl;

    delete[] flattenedArray1;
    delete[] flattenedArray2;
    delete[] combinedArray;

    return 0;
}
