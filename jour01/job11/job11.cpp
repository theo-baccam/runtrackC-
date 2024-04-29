#include <iostream>


int main() {
    int n = 0;
    std::cout << "Attribuer une valeur entière à n ";
    std::cin >> n;

    int m = 0;
    std::cout << "Attribuer une valeur entière à m ";
    std::cin >> m;

    std::cout << "n = " << n << std::endl << "m = " << m << std::endl;

    int value1 = n;
    int value2 = m;
    n = value2;
    m = value1;

    std::cout << "n = " << n << std::endl << "m = " << m << std::endl;

    return 0;
}
