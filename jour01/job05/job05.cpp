#include <iostream>


int main() {
    int a = 0;
    std::cout << "Veuillez donner un premier entier: ";
    std::cin >> a;

    int b = 0;
    std::cout << "Veuillez donner un deuxième entier: ";
    std::cin >> b;

    std::cout << "Le produit est égale à " << a * b << std::endl;

    return 0;
}
