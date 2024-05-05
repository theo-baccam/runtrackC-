#include <iostream>


int main() {
    int x = 12;
    int &ref = x;

    ref = 3;
    std::cout << x << std::endl;

    return 0;
}
