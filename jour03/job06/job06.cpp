#include <iostream>

int main() {
    int TLength = 10;
    int T[TLength];

    std::cout 
        << "Veuillez entrer 10 entiers "
        "(ENTREE entre chaque entiers)"
        << std::endl;

    for (int i = 0; i < TLength; i++) {
        std::cin >> T[i];
    };

    int greaterIntegers = 0;
    for (int i = 0; i < TLength; i++) {
        if (T[i] >= 5) {
            greaterIntegers += 1;
        };
    };

    std::cout
        << "Le nombre d'entiers supérieurs ou égal à 5 est "
        << greaterIntegers
        << std::endl;
    return 0;
}
