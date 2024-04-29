#include <iostream>


int main() {
    int n = 0;
    std::cout << "Donnez un nombre entier: ";
    std::cin >> n;
    
    for (int i = 1; i <= 9; i++) {
        std::cout << n << " * " << i << " = " << n * i << std::endl;
    };

    return 0;
}
