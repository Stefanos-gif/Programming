#include <iostream>

int* allocateArray(int size) {
    return new int[size];
}

void fillArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1; // Fill with 1, 2, 3, ...
    }
}

int* createAndFillArray(int size) {
    int* arr = allocateArray(size);
    fillArray(arr, size);
    return arr;
}

void deallocateArray(int* arr) {
    delete[] arr;
}

int main() {
    int size = 1000;
    int* myArray = createAndFillArray(size);

    // Print the array
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Free the memory
    deallocateArray(myArray);

    return 0;
}
