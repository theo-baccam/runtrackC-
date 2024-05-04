#include <iostream>


int main() {
    int variable1 = 32;
    char variable2 = 'g';
    double variable3 = 92.467;

    int *pointer1 = &variable1;
    char *pointer2 = &variable2;
    double *pointer3 = &variable3;

    std::cout << *pointer1 << std::endl;
    std::cout << *pointer2 << std::endl;
    std::cout << *pointer3 << std::endl;

    *pointer1 = 21;
    *pointer2 = 'n';
    *pointer3 = 12.9283;

    std::cout << variable1 << std::endl;
    std::cout << variable2 << std::endl;
    std::cout << variable3 << std::endl;

    return 0;
}
