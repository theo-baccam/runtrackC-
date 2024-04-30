#include <iostream>


int main() {
    // On déclare la variable n en premier
    int n;
    // on met les instructions dans do {...}
    do {
        // J'ai changé le texte pour que ça soit plus clair
        std::cout << "donnez un nombre plus grand que 0: ";
        std::cin >> n;
    // On met la condition dans while (...)
    } while (n <= 0);

    return 0;
}
