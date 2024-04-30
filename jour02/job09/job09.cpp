#include <iostream>


int main() {
    int a = 386;
    int b = 391;
    int userGuess;

    std::cout << "Donnez un entier: ";
    std::cin >> userGuess;

    // On ne peut pas faire `a <= userGuess <= b`
    if (a <= userGuess && userGuess <= b) {
        std::cout << "GAGNE!" << std::endl;
    } else {
        std::cout << "PERDU!" << std::endl;
    }

    return 0;
}
