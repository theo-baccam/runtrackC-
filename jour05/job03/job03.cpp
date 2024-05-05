#include <iostream>
#include <string>
#include "job03.hpp"


Joueur::Joueur() {
    x = 0;
    y = 0;
}

Joueur::Joueur(double initialX, double initialY) {
    x = initialX;
    y = initialY;
}

Joueur::Joueur(double initialX, double initialY, std::string givenName) {
    x = initialX;
    y = initialY;
    name = givenName;
}

Joueur::~Joueur() {
    std::cout << "Joueur detruit" << std::endl;
}

void Joueur::setX(double newX) {
    x = newX;
}

void Joueur::setY(double newY) {
    y = newY;
}


int main() {
    Joueur uno;
    std::cout << uno.x << " " << uno.y << std::endl;

    Joueur dos(13.85, -2.36);
    std::cout << dos.x << " " << dos.y << std::endl;

    Joueur tres(-4.92, 195.92, "tres");
    std::cout << tres.name << " " << tres.x << " " << tres.y << std::endl;

    return 0;
}
