#include <iostream>


int main() {
    // Je met en unsigned car on obtiendra pas de valeurs négatifs
    unsigned int n;
    std::cout << "Donnez un entier positif ";
    std::cin >> n;

    unsigned long c = 0;
    unsigned long b = 1;
    // je met 
    unsigned long long a = 1;

    do {
        std::cout << a << std::endl;
        c = b;
        b = a;
        a = b + c;
    } while (a <= n);

    return 0;
}
