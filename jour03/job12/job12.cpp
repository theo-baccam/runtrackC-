#include <iostream>
#include <cstdlib>


int main() {
    std::srand(time(NULL));
    int randomNumber = std::rand() % 101;

    int lives = 6;
    int givenNumber;
    do {
        std::cout << "Donnez un nombre compris entre 0 et 100 ";
        std::cin >> givenNumber;
        if (givenNumber < randomNumber) {
            std::cout << "Trop petit" << std::endl;
            lives--;
            std::cout
                << "Il vous reste "
                << lives
                << " chance(s)"
                << std::endl;
        } else if (givenNumber > randomNumber) {
            std::cout << "Trop grand" << std::endl;
            lives--;;
            std::cout
                << "Il vous reste "
                << lives
                << " chance(s)"
                << std::endl;
        };
    } while ((givenNumber != randomNumber) && (lives > 0));

    if (lives <= 0) {
        std::cout
            << "Vous avez perdu(e), le nombre etait "
            << randomNumber
            << std::endl;
    } else {
        std::cout << "Vous avez gagne(e)!" << std::endl;
    };

    return 0;
}
