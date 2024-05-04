#include <iostream>


int main() {
    int number = 2019;
    int *pointer = &number;

    std::cout << *pointer << std::endl;
}
