#include <iostream>
#include <cmath>


int main() {

    std::cout
    << "   | 1  2  3  4  5  6  7  8  9  10   " << std::endl
    << "___|_________________________________" << std::endl;

    for (int y = 1; y <= 10; y++) {
        std::cout << y;
        int yNumberLength = 1 + (int)log10(y);
        for (int i = 0; i < 3 - yNumberLength; i++) {
            std::cout << " ";
        };
        std::cout << "| ";
        for (int x = 1; x <= 10; x++) {
            int product = x * y;
            std::cout << product;
            int productLength = 1 + (int)log10(product);
            for (int i = 0; i < 3 - productLength; i++) {
                std::cout << " ";
            };
        };
        std::cout << std::endl;
    };

    return 0;
}
