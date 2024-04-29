#include <iostream>


int main() {
    // Je préfère assigner immédiatement une valeur en déclarant une
    // variable pour empêcher qu'elle ait une valeur aléatoire
    int n = 0;

    std::cout << "Entre un nombre entier n: " << std::endl;
    std::cin >> n;

    if (n == 0) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        std::cout << "Hello World" << std::endl;
    };

    return 0;
}
