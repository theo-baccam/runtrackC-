#include <iostream>


int main() {
    int arraySize = 5;
    int array[arraySize] = {1, 2, 3, 4, 5};

    for (int i = 0; i < arraySize; i++) {
        int &reference = array[i];
        std::cout << reference << std::endl;
    };

    return 0;
}
