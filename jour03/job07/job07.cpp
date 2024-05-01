#include <iostream>

int main() {
    int integerArrayLength = 10;
    int integerArray[integerArrayLength];

    std::cout 
        << "Veuillez entrer 10 entiers "
        "(ENTREE entre chaque entiers)"
        << std::endl;

    for (int i = 0; i < integerArrayLength; i++) {
        std::cin >> integerArray[i];
    };

    int greatestInteger = integerArray[0];
    int greatestIntegerIndex = 0;
    for (int i = 0; i < integerArrayLength; i++) {
        if (integerArray[i] > greatestInteger) {
            greatestInteger = integerArray[i];
            greatestIntegerIndex = i;
        };
    };

    std::cout
        << "L'index de l'entier le plus grand dans le tableau est "
        << greatestIntegerIndex
        << std::endl;
    return 0;
}
