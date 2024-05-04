#include <iostream>
#include <cstdlib>


int main() {
    int arraySize;
    std::cout << "Quelle est la taille du tableau? ";
    std::cin >> arraySize;

    int *array = (int*) std::malloc(arraySize * sizeof(int));

    for (int i = 0; i < arraySize; i++) {
        std::cout << &array[i] << " " << array[i] << std::endl;
    };

    std::free(array);

    return 0;
}
