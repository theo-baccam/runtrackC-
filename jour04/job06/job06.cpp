#include <iostream>


int main() {
    int entier = 17;
    double flottant = 3.14;
    double reel = 123.345;
    char caractere[] = "La Plateforme";

    int *entierPointeur = &entier;
    double *flottantPointeur = &flottant;
    double *reelPointeur = &reel;
    char *caracterePointeur = caractere;

    std::cout << entierPointeur << " " << *entierPointeur << std::endl;
    std::cout << flottantPointeur << " " << *flottantPointeur << std::endl;
    std::cout << reelPointeur << " " << *reelPointeur << std::endl;
    std::cout << &caracterePointeur << " " << caracterePointeur << std::endl;

    return 0;
}
