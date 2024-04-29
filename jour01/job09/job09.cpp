#include <iostream>


int main() {
    int numbers[3] = {0, 0, 0};
    int numbersLength = sizeof(numbers) / sizeof(int);

    std::cout
    << "Veuillez entrez trois nombres (ENTREE entre chaque nombre):"
    << std::endl;

    for (int i = 0; i < numbersLength; i++) {
        std::cin >> numbers[i];
    };

    int biggestNumber = 0;
    for (int i = 0; i < numbersLength; i++) {
        if (biggestNumber >= numbers[i]) {
            continue;
        };
        biggestNumber = numbers[i];
    };

    std::cout << "Le plus grand nombre est " << biggestNumber << std::endl;

    return 0;
}
