#include <iostream>
#include <cmath>


int main() {
    int n;
    std::cout << "Donnez un entier naturel ";
    std::cin >> n;
    int nLength = 1 + (int)log10(n);

    int digits[nLength];
    int modifiedNumber = n;
    for (int i = 0; i < nLength; i++) {
        int lastDigit = modifiedNumber % 10;
        digits[i] = lastDigit;
        modifiedNumber = (modifiedNumber - lastDigit) / 10;
    };

    int sum;
    for (int i = 0; i < sizeof(digits) / sizeof(int); i++) {
        sum += pow(digits[i], nLength);
    };

    if (n == sum) {
        std::cout << n << " est un nombre narcissique" << std::endl;
    } else {
        std::cout << n << " n'est pas un nombre narcissique" << std::endl;
    };

    return 0;
}
