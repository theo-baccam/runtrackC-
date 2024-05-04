#include <iostream>


int main() {
    struct {
        int x;
        int y;
    } Point;

    int *xPointer = &Point.x;
    int *yPointer = &Point.y;

    *xPointer = 12;
    *yPointer = -43;

    std::cout << *xPointer << std::endl;
    std::cout << *yPointer << std::endl;

    return 0;
};
