#include <iostream>
#include <cmath>

// Je sais qu'il y a déjà sqrt() dans cmath, je voulais juste voir
// si je pouvais créer mon propre algorithme.
double getPreviousPerfectSquareRoot(double x) {
    double previousPerfectSquareRoot;
    
    for (double i = 0; i < x; i++) {
        double perfectSquareRoot = i;
        if (pow(i, 2) > x) {
            return previousPerfectSquareRoot;
        };

        previousPerfectSquareRoot = perfectSquareRoot;
    };

    return 0;
}

double getNextPerfectSquareRoot(double x) {
    double nextPerfectSquareRoot;
    
    for (double i = 0; i < x; i++) {
        double perfectSquareRoot = i;
        if (pow(i, 2) > x) {
            nextPerfectSquareRoot = perfectSquareRoot;
            return nextPerfectSquareRoot;
        };
    };

    return 0;
}

double getClosestPerfectRoot(double x, double previous, double next) {
    double x_previous_difference = x - previous;
    double x_next_difference = next - x;

    if (x_next_difference > x_previous_difference) {
        return next;
    } else {
        return previous;
    };
}

double getApproximateRoot(double x, double initialGuess) {
    double i = 0;
    double currentGuess = initialGuess;
    do {
        currentGuess = initialGuess + i;
        i += 0.0000005;
    } while (pow(currentGuess, 2) < x);

    return currentGuess;
}


int main() {
    double n;
    std::cout << "Donnez un nombre positif: ";
    std::cin >> n;

    // Avec sqrt
    std::cout << sqrt(n) << std::endl;

    // Avec mon algorithme
    double previous = getPreviousPerfectSquareRoot(n);
    double next = getNextPerfectSquareRoot(n);
    double closest = getClosestPerfectRoot(n, previous, next);
    double approximate = getApproximateRoot(n, closest);
    std::cout << approximate << std::endl;

    return 0;
}
