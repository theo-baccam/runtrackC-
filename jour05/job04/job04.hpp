#include <string>


class Joueur {
    public:
        Joueur();
        Joueur(double x, double y);
        Joueur(double x, double y, std::string name);
        ~Joueur();
        double x;
        double y;
        std::string name;
        
        void setX(double x);
        void setY(double y);
        void setName(std::string name);
};
