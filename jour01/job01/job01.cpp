#include <iostream>


int main() {
    char c = '\x01';
    short int p = 10;

    // Chars are also an integer type whose value is associated to a
    // character
    // As long as an integer value is between -127 to 127 or between 0 and
    // 255 then it can be assigned to a char variable;
    // above 32 (unsigned), ascii values start being printable 
    int x = p + 3;
    char x_ = x;
    std::cout << x << " " << x_ << std::endl;

    int y = c + 1;
    char y_ = y;
    std::cout << y << " " << y_ << std::endl;

    int z = p + c;
    char z_ = z;
    std::cout << z << " " << z_ << std::endl;

    int w = 3 * p + 5 * c;
    char w_ = w;
    std:: cout << w << " " << w_ << std::endl;

    return 0;
}
