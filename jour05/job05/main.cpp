#include <iostream>
#include "Etudiant.hpp"

Etudiant::Etudiant(
    std::string nom,
    std::string prenom,
    int age,
    int matricule
) {
    this->nom = nom;
    this->prenom = prenom;
    this->age = age;
    this->matricule = matricule;
}
Etudiant::~Etudiant() {}


int main() {
    Etudiant theo("Baccam", "Theo", 20, 20022004);
    std::cout
        << "Nom: " << theo.nom << '\n'
        << "Prenom: " << theo.prenom << '\n'
        << "Age: " << theo.age << '\n'
        << "Matricule: " << theo.matricule << '\n';

    return 0;
}