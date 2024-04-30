#include <iostream>


void displayNumbersAscending(int a, int b) {
    int i = a;
    while (i <= b) {
        std::cout << i << std::endl;
        i++;
    };
}

void displayNumbersDescending(int a, int b) {
    int i = a;
    while (i >= b) {
        std::cout << i << std::endl;
        i--;
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
