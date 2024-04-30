#include <iostream>

int getFactorial(int n) {
    unsigned long long int factorial = 1;
    if (n == 0) {
        return factorial;
    };
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    };
    return factorial;
}

int main() {
    int n;

    std::cout << "Donnez un nombre entier ";
    std::cin >> n;

    std::cout
    << "Le factoriel de " << n
    << " est " << getFactorial(n)
    << std::endl;

    return 0;
}
