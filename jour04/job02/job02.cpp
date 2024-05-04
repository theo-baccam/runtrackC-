#include <iostream>


int main() {
    int number1 = 218;
    int number2 = 592;

    int *pointer1 = &number1;
    int *pointer2 = &number2;

    std::cout << *pointer1 << " " << *pointer2 << std::endl;

    int temporary = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temporary;

    std::cout << *pointer1 << " " << *pointer2 << std::endl;

    return 0;
}
