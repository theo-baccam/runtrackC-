#include <iostream>


int main() {
    int variable = 2019;
    int *pointer = &variable;

    std::cout << *pointer << std::endl;
}
