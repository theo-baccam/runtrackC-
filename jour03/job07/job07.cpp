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

    int greatestInteger = T[0];
    int greatestIntegerIndex = 0;
    for (int i = 0; i < TLength; i++) {
        if (T[i] > greatestInteger) {
            greatestInteger = T[i];
            greatestIntegerIndex = i;
        };
    };

    std::cout
        << "L'index de l'entier le plus grand dans le tableau est "
        << greatestIntegerIndex
        << std::endl;
    return 0;
}
