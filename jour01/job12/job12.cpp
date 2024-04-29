#include <iostream>
#include <iomanip>


int main() {
    int numbers[5] = {0, 0, 0, 0, 0};

    std::cout
    << "Entrez 5 entiers (ENTREE entre les nombres): "
    << std::endl;

    for (int i = 0; i < 5; i++) {
        std::cin >> numbers[i];
    };

    float average = (
        float (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4])
        / 5
    );

    std::cout
    << std::fixed
    << std::setprecision(2)
    << "La moyenne de ces nombres est "
    << average
    << std::endl;

    return 0;
}
