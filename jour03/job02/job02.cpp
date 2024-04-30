#include <iostream>


bool isVowel(char character) {
    char VOWELS[] = "aeiou";

    for (int i = 0; i < sizeof(VOWELS); i++) {
        if (character == VOWELS[i]) {
            return true; // retourne 1
        }
    };

    return false; // retourne 0
}

void popArray(char *string, int stringLength, int index) {
    for (int i = index; i < stringLength; i ++) {
        string[i] = string[i + 1];
    };
}

int main() {
    char string[] = "vive la plateforme !";
    std::cout << string << std::endl;

    for (int i = 0; i < sizeof(string); i++) {
        if (isVowel(string[i]) == 1) {
            popArray(string, sizeof(string) - 1, i);
        };
    };

    std::cout << string << std::endl;

    return 0;
}
