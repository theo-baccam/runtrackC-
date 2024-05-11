#include <iostream>
#include <string>
#include "Personne.hpp"


Personne::Personne(std::string nom, int pointsDeVie, float defense) {
    this->nom = nom;
    this->pointsDeVie = pointsDeVie;
    this->defense = defense;
};
Personne::~Personne() {}
std::string Personne::getNom() {
    return this->nom;
}
int Personne::getPointsDeVie() {
    return this->pointsDeVie;
}
float Personne::getDefense() {
    return this->defense;
}
void Personne::setNom(std::string nom) {
    this->nom = nom;
}
void Personne::setPointsDeVie(int pointsDeVie) {
    this->pointsDeVie = pointsDeVie;
}
void Personne::setDefense(float defense) {
    this->defense = defense;
}


int main() {
    Personne character ("John Doe", 20, 13.3);
    std::cout
        << character.getNom() << ' '
        << character.getPointsDeVie() << ' '
        << character.getDefense() << '\n';

    character.setNom("Zohn Boe");
    character.setPointsDeVie(22);
    character.setDefense(character.getDefense() * 1.375);
    std::cout
        << character.getNom() << ' '
        << character.getPointsDeVie() << ' '
        << character.getDefense() << '\n';

    return 0;
}