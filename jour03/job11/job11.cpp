#include <iostream>


int main() {
    int arraySize;
    std::cout << "Quel est le nombre d'entiers que vous voulez mettre? ";
    std::cin >> arraySize;

    int array[arraySize];
    for (int i = 0; i < arraySize; i++) {
        std::cin >> array[i];
    };

    int sum = 0;
    for (int i = 0; i < arraySize; i++) {
        if (array[i] % 2 == 0) {
            sum += array[i];
        };
    };

    std::cout
        << "La somme des nombres pairs du tableau est "
        << sum
        << std::endl;

    return 0;
}
