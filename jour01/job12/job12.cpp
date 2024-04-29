#include <iostream>


int main() {
    int numbers[5] = {0, 0, 0, 0, 0};
    int numbersLength = sizeof(numbers) / sizeof(int);

    std::cout
    << "Entrez 5 entiers (ENTREE entre les nombres): "
    << std::endl;

    for (int i = 0; i < numbersLength; i++) {
        std::cin >> numbers[i];
    };

    int average = (
        (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4])
        / numbersLength
    );

    std::cout << "La moyenne de ces nombres est " << average << std::endl;

    return 0;
}
