#include <iostream>


int main() {
    int n;
    std::cin >> n;
    switch(n) {
        case 0:
            std::cout << "Nul\n";
        case 1:
        case 2:
            std::cout << "Petit\n";
            break;
        case 3:
        case 4:
        case 5:
            std::cout << "Moyen\n";
        default:
            std::cout << "Grand\n";
    };
    // n = 0 -> "Nul" et "Petit"
    // n = 1 -> "Petit"
    // n = 4 -> "Moyen" et "Grand"
    // n = 10 -> "Grand"
    // n = 5 -> "Moyen" et "Grand"
    // La raison que ça affiche plusieurs messages selon le nombre est parce
    // qu'il n'y a pas de break pour chaque case.

    return 0;
}
