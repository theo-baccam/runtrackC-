#include <iostream>


int main() {
    int array[] = {92, 6627, 8192, 120, 8, 9102};
    int *pointer = array;

    int arraySize = sizeof(array) / sizeof(int);
    for (int i = 0; i < arraySize; i++) {
        std::cout << &pointer[i] << " " << pointer[i] << std::endl;
    };

    return 0;
}
