#include <iostream>
#include <string>
#include "job04.hpp"


Joueur::Joueur() {
    x = 0;
    y = 0;
}

Joueur::Joueur(double x, double y) {
    this->x = x;
    this->y = y;
}

Joueur::Joueur(double x, double y, std::string name) {
    this->x = x;
    this->y = y;
    this->name = name;
}

Joueur::~Joueur() {
    std::cout << "Joueur detruit" << std::endl;
}

void Joueur::setX(double x) {
    this->x = x;
}

void Joueur::setY(double y) {
    this->y = y;
}

void Joueur::setName(std::string name) {
    this->name = name;
};


int main() {
    Joueur johnDoe;
    johnDoe.setX(32.95);
    johnDoe.setY(-193.81);
    johnDoe.setName("John Doe");

    std::cout
        << johnDoe.name << " "
        << johnDoe.x << " "
        << johnDoe.y << std::endl;

    return 0;
}
