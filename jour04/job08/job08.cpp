#include <iostream>

int main() {
    int year = 2019;
    char school[] = "La Plateforme";
    double pi = 3.14;
    char students[] = "Étudiants";

    void *pointers[4];
    pointers[0] = &year;
    pointers[1] = school;
    pointers[2] = &pi;
    pointers[3] = students;

    std::cout << pointers[0] << " " << *(int*) pointers[0] << std::endl;
    std::cout << pointers[1] << " " << (char*) pointers[1] << std::endl;
    std::cout << pointers[2] << " " << *(double*) pointers[2] << std::endl;
    std::cout << pointers[3] << " " << (char*) pointers[3] << std::endl;

    return 0;
}
