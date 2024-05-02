#include <iostream>


int getStringLength(char *string) {
    int i = 0;
    while (string[i] != 0) {
        int code = string[i];
        i++;
    }
    return i;
}


int main() {
    int maxLength = 1024;
    char userInput[maxLength];
    std::cin.getline(userInput, maxLength);

    int userInputLength = getStringLength(userInput);

    char tab[userInputLength + 1];
    for (int i = 0; i < userInputLength; i++) {
        tab[i] = userInput[i];
    };

    std::cout << sizeof(userInput) / sizeof(char) << std::endl;
    std::cout << sizeof(tab) / sizeof(char) << std::endl;

    return 0;
}
