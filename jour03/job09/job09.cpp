#include <iostream>
#include <cstdlib>


int getStringLength(char *string) {
    int i = 0;
    while (string[i] != 0) {
        int code = string[i];
        i++;
    }
    return i;
}


bool stringIncludedInString(char *subString, char *fullString) {
    int i = 0;
    do {
        int j = 0;
        do {
            if (fullString[i + j] != subString[j]) {
                break;
            };
            j++;
        } while ((int) subString[j] !=0 && fullString[i + j] != 0);
        if (j == getStringLength(subString)) {
            return true;
        };
        i++;
    } while ((int) fullString[i] != 0);

    return false;
}


int main() {
    std::cout
        << "Donnez deux chaines de caractères "
        "(ENTREE entre chaque chaine) "
        << std::endl;

    int stringLength = 1024;
    char *string1 = (char*) std::malloc(stringLength * sizeof(char));
    char *string2 = (char*) std::malloc(stringLength * sizeof(char));
    std::cin.getline(string1, stringLength);
    std::cin.getline(string2, stringLength);

    std::cout << stringIncludedInString(string1, string2) << std::endl;

    return 0;
}
