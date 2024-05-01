#include <iostream>
#include <string.h>


bool compareStrings(char *string1, char *string2) {
    if (strlen(string1) != strlen(string2)) {
        return false;
    };

    for (int i = 0; i < strlen(string1); i++) {
        if (string1[i] != string2[i]) {
            return false;
        };
    };

    return true;
}


int main() {
    char string1[] = "pareil";
    char string2[] = "pareil";
    char string3[] = "different";
    char string4[] = "avions";

    std::cout << compareStrings(string1, string2) << std::endl;
    std::cout << compareStrings(string1, string3) << std::endl;
    std::cout << compareStrings(string1, string4) << std::endl;
}
