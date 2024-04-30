#include <iostream>


void displayNumbersAscending(int a, int b) {
    for (int i = a; i <= b; i++) {
        std::cout << i << std::endl;
    };
}

void displayNumbersDescending(int a, int b) {
    for (int i = a; i >= b; i--) {
        std::cout << i << std::endl;
    };
}


int main() {
    int a;
    std::cout << "Donnez un entier a: ";
    std::cin >> a;

    int b;
    std::cout << "Donnez un entier b: ";
    std::cin >> b;

    if (a < b) {
        displayNumbersAscending(a, b);
    } else if (a > b) {
        displayNumbersDescending(a, b);
    };

    return 0;
}
