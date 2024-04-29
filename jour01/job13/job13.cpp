#include <iostream>
#include <cmath>


void getCubedAscending(int n) {
    for (int i = 5; i <= n; i++) {
        std::cout << pow(i, 3) << std::endl;
    };
}

void getCubedDescending(int n) {
    for (int i = 5; i >= n; i--) {
        std::cout << pow(i, 3) << std::endl;
    };
}


int main() {
    int n = 0;
    std::cout << "Veuillez donner un nombre entier: ";
    std::cin >> n;

    if (n < 5) {
        getCubedDescending(n);
    } else {
        getCubedAscending(n);
    };

    return 0;
}
