#include <iostream>


int main() {
    int n = 0;
    std::cout << "Veuillez donner un nombre entier: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << n << " est un nombre pair" << std::endl;
    } else {
        std::cout << n << " est un nombre impair" << std::endl;
    };

    return 0;
}
