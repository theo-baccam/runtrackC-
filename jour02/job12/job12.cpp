#include <iostream>


double getHarmonicSum(double n) {
    double harmonicSum = 0;

    for (int i = 1; i < n; i++) {
        harmonicSum += 1.0 / i;
    };

    return harmonicSum;
}


int main() {
    double n;
    std::cout << "Donnez un nombre: ";
    std::cin >> n;

    std::cout << getHarmonicSum(n) << std::endl;

    return 0;
}
