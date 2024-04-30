#include <iostream>


int main() {
    float note;
    int done = 0;
    do {
        std::cout << "Donnez une note: ";
        std::cin >> note;

        if (note < 0 || note > 20) {
            continue;
        } else if (note > 10) {
            std::cout << "Validé" << std::endl;
            done = 1;
        } else {
            std::cout << "Non validé" << std::endl;
            done = 1;
        };

    } while (done == 0);

    return 0;
}
