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
    char string[] = "Vive la plateforme !";

    std::cout << "La taille est " << getStringLength(string) << std::endl;

    return 0;
}
