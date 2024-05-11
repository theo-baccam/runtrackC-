#include <iostream>
#include "Contact.hpp"


Contact::Contact(std::string nom, long long numero) {
    this->nom = nom;
    this->numero = numero;
}
Contact::Contact(Contact& original) {
    this->nom = original.nom;
    this->numero = original.numero;
}
Contact::~Contact() {}


int main() {
    Contact johnDoeDomicile ("John Doe (Domicile)", 33483920310);
    Contact janeDoeDomicile ("Jane Doe (Domicile)", 33492860102);

    Contact johnDoeMobile (johnDoeDomicile);
    johnDoeMobile.nom = "John Doe (Mobile)";
    johnDoeMobile.numero = 33685379682;

    Contact janeDoeMobile (janeDoeDomicile);
    janeDoeMobile.nom = "Jane Doe (Mobile)";
    janeDoeMobile.numero = 33792958304;

    std::cout
        << johnDoeDomicile.nom << ' ' << johnDoeDomicile.numero << '\n'
        << janeDoeDomicile.nom << ' ' << janeDoeDomicile.numero << '\n'
        << johnDoeMobile.nom << ' ' << johnDoeDomicile.numero << '\n'
        << johnDoeMobile.nom << ' ' << johnDoeDomicile.numero << '\n';

    return 0;
}