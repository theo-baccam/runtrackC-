#include <string>


class Etudiant {
    public:
        Etudiant(
            std::string nom,
            std::string prenom,
            int age,
            int matricule
        );
        ~Etudiant();
        std::string nom;
        std::string prenom;
        int age;
        int matricule;
};