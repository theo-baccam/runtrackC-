#include <iostream>


int getMaxValueInIntegerArray(int *array, int arraySize) {
    int maxValue = array[0];

    for (int i = 0; i < arraySize; i++) {
        if (array[i] > maxValue) {
            maxValue = array[i];
        };
    }

    return maxValue;
}


int main() {
    int arraySize = 6;
    int array[6] = {-9232, 82, 9042, 891, -823, 623};

    std::cout << getMaxValueInIntegerArray(array, arraySize) << std::endl;
    return 0;
}
