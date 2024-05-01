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

    int greaterIntegers = 0;
    for (int i = 0; i < integerArrayLength; i++) {
        if (integerArray[i] >= 5) {
            greaterIntegers += 1;
        };
    };

    std::cout
        << "Le nombre d'entiers supérieurs ou égal à 5 est "
        << greaterIntegers
        << std::endl;
    return 0;
}
