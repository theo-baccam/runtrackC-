#include <iostream>
#include <cstdlib>


int main() {
    int tabLength = 1024;
    char *tab = (char*) std::malloc(tabLength * sizeof(char));

    std::cin.getline(tab, tabLength);
    std::cout << tab << std::endl;

    std::free(tab);

    return 0;
}
