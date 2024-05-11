#include <string>


class Personne {
    public:
        Personne(std::string nom, int pointsDeVie, float defense);
        ~Personne();
        std::string getNom();
        int getPointsDeVie();
        float getDefense();
        void setNom(std::string nom);
        void setPointsDeVie(int pointsDeVie);
        void setDefense(float defense);
    private:
        std::string nom;
        int pointsDeVie;
        float defense;
};