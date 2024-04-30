#include <iostream>


// J'aurais fait un fizz-buzz cependant faudrait que je comprenne
// mieux comment les strings marche dans C/C++
int main() {
    int n;
    std::cout << "Donnez un entier n: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        std::cout << i << " ";
        if (i % 3 == 0) {
            std::cout << "Multiple de 3 ";
        };
        if (i % 5 == 0) {
                std::cout << "Multiple de 5 ";
        };
        std::cout << std::endl;
    };

    return 0;
}
