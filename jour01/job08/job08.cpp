#include <iostream>


int isLeapYear(int year) {
    if (year % 100 == 0) {
        return year % 400 == 0;
    };

    return year % 4 == 0;
}


int main() {
    int year = 0;
    std::cout << "Donne une année: ";
    std::cin >> year;

    if (isLeapYear(year) == 1) {
        std::cout << year << " est une année bissextile" << std::endl;
    } else {
        std::cout << year << " n'est pas une année bissextile" << std::endl;
    };

    return 0;
}
