#include <iostream>
#include <cmath>


int main() {
    int n = 0;
    std::cout << "Veuillez donnez un entier" << std::endl;
    std::cin >> n;

    int digitsLength  = 1 + log10(n);
    int reversedArray[digitsLength];
    int reversedArrayLength = sizeof(reversedArray) / sizeof(int);
    int lastDigit;
    for (int i = 1; i <= digitsLength; i++) {
        lastDigit = n % 10;
        reversedArray[i] = lastDigit;
        n /= 10;
    }

    for (int i = 1; i <= reversedArrayLength; i++) {
        std::cout << reversedArray[i];
    }
    std::cout << std::endl;

    return 0;
}
