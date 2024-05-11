#include <iostream>
#include <string>


class Contact {
    public:
        Contact(std::string, long long numero);
        Contact(Contact& original);
        ~Contact();
        std::string nom;
        long long numero;
};