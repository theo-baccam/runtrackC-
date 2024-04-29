#include <iostream>
#include <iomanip>


int main() {
    float a = 0;
    std::cout << "Veuillez donner un premier nombre: ";
    std::cin >> a;

    float b = 0;
    std::cout << "Veuillez donner un deuxième nombre: ";
    std::cin >> b;

    if ((a + b) == static_cast<int>(a + b)) {
        std::cout
        << "La somme est égale à "
        << static_cast<int>(a + b)
        << std::endl;
    } else {
        std::cout
        << std::fixed
        << std::setprecision(2)
        << "La somme est égale à "
        << a + b
        << std::endl;
    };

    return 0;
}
