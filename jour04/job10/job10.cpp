#include <iostream>
#include <cstdlib>

#define MAX_NOTES 4096
#define MAX_NAME_LENGTH 64


struct NoteStruct {
    int id;
    char *lastName;
    char *firstName;
    double note;
};
typedef NoteStruct note;

note* notesArray = (note*) std::malloc(MAX_NOTES * sizeof(note));


void addNote() {
    int i = 0;
    while (notesArray[i].id != -1) {
        i++;
    };

    notesArray[i].id = i;

    std::cout << "\nNom : ";
    notesArray[i].lastName = (
        (char*) std::malloc(MAX_NAME_LENGTH * sizeof(char))
    );
    std::cin.ignore();
    std::cin.getline(notesArray[i].lastName, MAX_NAME_LENGTH);

    std::cout << "Prenom : ";
    notesArray[i].firstName = (
        (char*) std::malloc(MAX_NAME_LENGTH * sizeof(char))
    );
    std::cin.getline(notesArray[i].firstName, MAX_NAME_LENGTH);

    std::cout << "Note : ";
    std::cin >> notesArray[i].note;

    return;
}

void listNotes() {
    int i = 0;
    while (i < MAX_NOTES) {
        if (notesArray[i].id != -1) {
            std::cout
                << "\n================"
                << "\nID : " << notesArray[i].id
                << "\nNom : " << notesArray[i].lastName
                << "\nPrenom : " << notesArray[i].firstName
                << "\nNote : " << notesArray[i].note
                << std::endl;
        };
        i++;
    };
    return;
}

void deleteNote() {
    int chosenId;
    std::cout << "\nL'ID de la note a supprimer : ";
    std::cin >> chosenId;

    int i = 0;
    while (i < MAX_NOTES) {
        if (notesArray[i].id == chosenId) {
            notesArray[i].id = -1;
            std::free(notesArray[i].lastName);
            std::free(notesArray[i].firstName);
            notesArray[i].note = 0;
            break;
        };
        i++;
    };
}

void averageNote() {
    int i = 0;
    double notesSum = 0;
    double notesAmount = 0;

    while (i < MAX_NOTES) {
        if (notesArray[i].id != - 1) {
            notesSum += notesArray[i].note;
            notesAmount += 1;
        };
        i++;
    }; 

    if (notesAmount > 0) {
        double notesAverage = notesSum / notesAmount;
        std::cout
            << "\nLa moyenne des notes est "
            << notesAverage << std::endl;
    } else {
        std::cout << "\nIl n'y a pas de note" << std::endl;
    };
};

void mainMenu() {
    int userInput;

    do {
        std::cout
            << "\nMenu"
            << "\n1. Ajouter une note"
            << "\n2. Afficher la liste de notes"
            << "\n3. Supprimer une note d'un etudiant"
            << "\n4. Afficher la moyenne des notes"
            << "\n5. Quitter"
            << "\nChoix : ";
        std::cin >> userInput;

        switch (userInput) {
            case 1: addNote(); break;
            case 2: listNotes(); break;
            case 3: deleteNote(); break;
            case 4: averageNote(); break;
        };
    } while (userInput != 5);
}


int main() {
    for (int i = 0; i < MAX_NOTES; i++) {
        notesArray[i].id = -1;
    };

    mainMenu();

    return 0;
}
