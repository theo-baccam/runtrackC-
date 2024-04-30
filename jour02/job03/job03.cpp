#include <iostream>

int main() {
    int i;
    int n;
    int som;

    // Boucle while
    som = 0;
    i = 0;
    while (i < 4) {
        std::cout << "Donnez un entier ";
        std::cin >> n;
        som += n;
        i++;
    }
    std::cout << "Somme : " << som << std::endl;

    // Boucle do while
    som = 0;
    i = 0;
    do {
        std::cout << "Donnez un entier ";
        std::cin >> n;
        som += n;
        i++;
    } while (i < 4);
    std::cout << "Somme : " << som << std::endl;

    return 0;
}
