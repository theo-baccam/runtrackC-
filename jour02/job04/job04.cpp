#include <iostream>


int main() {
    float a;
    float b;

    std::cout << "Donnez un premier nombre: ";
    std::cin >> a;

    std::cout << "Donnez un deuxieme nombre: ";
    std::cin >> b;

    int done = 0;
    do {
        char operation;

        std::cout
        << "Quelle operation?\n"
        << "addition        +\n"
        << "soustraction    -\n"
        << "multiplication  *\n"
        << "division        /"
        << std::endl;
        
        std::cin >> operation;

        switch (operation) {
            case '+':
                std::cout << a << " + " << b << " = " << a + b << std::endl;
                done = 1;
                break;
            case '-':
                std::cout << a << " - " << b << " = " << a - b << std::endl;
                done = 1;
                break;
            case '*':
                std::cout << a << " * " << b << " = " << a * b << std::endl;
                done = 1;
                break;
            case '/':
                std::cout << a << " / " << b << " = " << a / b << std::endl;
                done = 1;
                break;
        }
    } while (done = 0);

    return 0;
}
