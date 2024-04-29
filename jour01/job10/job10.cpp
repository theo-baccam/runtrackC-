#include <iostream>


int main() {
    float prixHorsTaxe = 0;
    std::cout << "Prix d'un kg hors taxe? ";
    std::cin >> prixHorsTaxe;

    float kilogramme = 0;
    std::cout << "Combien de kg? ";
    std::cin >> kilogramme;

    float tvaPourcentage = 0;
    std::cout << "Taux de TVA en pourcentage? ";
    std::cin >> tvaPourcentage;

    float prixTTC = (
        (prixHorsTaxe * kilogramme)
        * (1 + (tvaPourcentage / 100))
    );

    std::cout << "Le prix TTC est " << prixTTC << "€" << std::endl;

    return 0;
}
