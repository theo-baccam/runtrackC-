#include <iostream>
#include <cstdlib>
#define MAX_ETUDIANTS 512


struct Staff {
    std::string nom;
    std::string prenom;
};
typedef Staff staff;

struct Etudiant {
    std::string nom;
    std::string prenom;
};
typedef Etudiant etudiant;


etudiant* etudiants = (
    (etudiant*) std::malloc(MAX_ETUDIANTS * sizeof(etudiant))
);


void displayEtudiant() {
    int i = 0;
    do {
        if (etudiants[i].nom != " ") {
            std::cout
                << etudiants[i].nom << " "
                << etudiants[i].prenom << " "
                << std::endl;
        };
        i++;
    } while ((i < MAX_ETUDIANTS));
};

void addEtudiant() {
    std::string nom;
    std::cout << "Nom: ";
    std::cin >> nom;

    std::string prenom;
    std::cout << "Prenom: ";
    std::cin >> prenom;

    int i = 0;
    do {
        if (etudiants[i].nom == " ") {
            etudiants[i].nom = nom;
            etudiants[i].prenom = prenom;
            break;
        };
        i++;
    } while ((i < MAX_ETUDIANTS) || (etudiants[i].nom == " "));
}

void mainMenu() {
    int userInput;
    do {
        std::cout
            << "1) Afficher les etudiants\n" 
            << "2) Ajouter un etudiant\n"
            << "3) Quitter\n"
            << "Choix: ";
        std::cin >> userInput;
        switch (userInput) {
            case 1: displayEtudiant(); break;
            case 2: addEtudiant(); break;
        };
    } while (userInput != 3);
};


int main() {
    staff alicia;
    alicia.nom = "Cordial";
    alicia.prenom = "Alicia";

    staff pierre;
    pierre.nom = "Malardier";
    pierre.prenom = "Pierre";

    std::cout
        << alicia.nom << " " << alicia.prenom << std::endl
        << pierre.nom << " " << pierre.prenom << std::endl;

    for (int i = 0; i < MAX_ETUDIANTS; i++) {
        etudiants[i].nom = " ";
        etudiants[i].prenom = " ";
    };

    mainMenu();

    std::free(etudiants);

    return 0;
};
