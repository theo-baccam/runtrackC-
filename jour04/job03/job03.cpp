#include <iostream>
#include <cstdlib>
#include <cmath>


int getStringLength(char *string) {
    int i = 0;
    while (string[i] != 0) {
        int code = string[i];
        i++;
    }
    return i;
}


void invertString(char *string) {
    int i = 0;
    do {
        char *pointer1 = &string[i];
        char *pointer2 = &string[getStringLength(string) - (i + 1)];
        
        char temporary = *pointer1;
        *pointer1 = *pointer2;
        *pointer2 = temporary;
        i++;
    } while (i < (std::ceil(getStringLength(string) / 2)));
}


int main() {
    int maxStringSize = 256;
    char *string = (char*) std::malloc(maxStringSize * sizeof(int));
    std::cin.getline(string, maxStringSize);

    invertString(string);

    std::cout << string << std::endl;

    return 0;
}
