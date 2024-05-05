#include <string>


class Joueur {
    public:
        Joueur();
        Joueur(double initialX, double initialY);
        Joueur(double initialX, double initialY, std::string givenName);
        ~Joueur();
        double x;
        double y;
        std::string name;
        
        void setX(double newX);
        void setY(double setY);
};
