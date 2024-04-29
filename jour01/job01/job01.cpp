#include <iostream>


int main() {
    char c = '\x01';
    short int p = 10;

    // Les chars sont un type integer dont la valeur est associé à un
    // caractère.
    // Tant qu'une valeur int est entre -127 à 127 ou 0 à 255 (unsigned),
    // elle peut être assigné à une variable char
    // Au dessus de 32 (unsigned), les caractères ascii commencent à être
    // visibles
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
