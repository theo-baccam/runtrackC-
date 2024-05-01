#include <iostream>


bool isCorrectHourFormat(char *string) {
    // Les index où il devrait avoir des chiffres
    int digits[] = {0, 1, 3, 4};

    for (int i = 0; i < sizeof(digits) / sizeof(int); i++) {
        // Les codes ASCII pour les chiffres vont de 48 (0) à 57 (9)
        if (!(48 <= string[digits[i]] && string[digits[i]] <= 57)) {
            return false;
        };
    };

    if (string[2] != 'h') {
        return false;
    };

    return true;
}


int main() {
    int hourStringLength = 5 + 1;
    char userInput[hourStringLength];
    std::cout << "Donnez une heure en format '__h__' " << std::endl;
    std::cin.getline(userInput, hourStringLength);

    if (isCorrectHourFormat(userInput) == 1) {
        std::cout << "Le format est correct" << std::endl;
    } else {
        std::cout << "Le format n'est pas correct" << std::endl;
    };

    return 0;
}
