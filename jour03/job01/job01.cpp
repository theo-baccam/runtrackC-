#include <iostream>
#include <string.h>

// lettres minuscules vont de 97-122 inclus
// lettres majuscules vont de 65-90 inclus (- 32)

int main() {
    char string[] = "vive la plateforme !";
    std::cout << string << std::endl;

    for (int i = 0; i < strlen(string); i++) {

        if (!(97 <= string[i] && string[i] <= 122)) {
            continue;
        };
        string[i] -= 32;
    };

    std::cout << string << std::endl;

    return 0;
}
