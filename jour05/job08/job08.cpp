#include <iostream>
#include "Chien.hpp"
#include "Chat.hpp"


Chien::Chien() {}
Chien::~Chien() {}
void Chien::crier() {
    std::cout << "Woof!\n";
}
void Chien::manger() {
    std::cout << "Le chien a une alimentation variee.\n";
}

Chat::Chat() {}
Chat::~Chat() {}
void Chat::crier() {
    std::cout << "Miaou!\n";
}
void Chat::manger() {
    std::cout << "Le chat mange du poisson.\n";
}


int main() {
    Chien fido;
    fido.crier();
    fido.manger();

    Chat zia;
    zia.crier();
    zia.manger();

    return 0;
}