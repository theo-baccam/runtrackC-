#include <iostream>

int main() {
    int x = 5;
    int y = 2;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    // Pas besoin de parenthèses ici
    int a = x + 5;
    std::cout << "a = " << a << std::endl;

    // On a besoin de parenthèses ici puisqu'on attribut une nouvelle
    // valeur à x
    a = (x = y) + 2;
    std::cout << "a = " << a << std::endl;

    // Une comparaison retourne une valeur booléenne de 0 (faux)
    // ou de 1 (vrai)
    a = x == y;
    std::cout << "a = " << a << std::endl;

    // Si nous souhaitons vérifier si deux booléens sont vrai avec
    // l'opérateur AND logique, il faudrait qu'on spécifie encore plus
    // l'ordre des opérations en mettant une parenthèse autour du calcul
    // entier
    int b = 2;
    int c = 4;
    int d = 3;
    std::cout
    << "(a < b) && (c < d) = "
    << ((a < b) && (c < d))
    << std::endl;

    int i = 1;
    int n = 2;
    int p = 3;
    // Les parenthèses sont recommandées pour spécifier l'ordre
    // des opérations.
    // Aussi, dans l'expression originale, on incrémentait i avec
    // i++, ce qui n'incrémente la variable qu'après l'opération
    std::cout << "(++i) * (n + p) = " << (++i) * (n + p) << std::endl;

    return 0;
}
