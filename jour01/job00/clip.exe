#include <iostream>

int main() {
    int x = 5;
    int y = 2;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;

    // No need for parentheses here
    int a = x + 5;
    std::cout << "a = " << a << std::endl;

    // we need parentheses here since we're re-assigning the value to
    // x to that of y's
    a = (x = y) + 2;
    std::cout << "a = " << a << std::endl;

    // A comparison returns a boolean value of either 0 (false) or 1 (true)
    a = x == y;
    std::cout << "a = " << a << std::endl;

    // If we actually want to check if two booleans are true with the
    // logical AND operator, we would need to specify even further
    // the order of operations by adding another parentheses around
    // the whole thing
    int b = 2;
    int c = 4;
    int d = 3;
    std::cout << "(a < b) && (c < d) = " << ((a < b) && (c < d)) << std::endl;

    int i = 1;
    int n = 2;
    int p = 3;
    // Parentheses are recommended in order to specify the order of
    // operations, however since in the original expression it was
    // i++, it only increments i after the operation
    std::cout << "(++i) * (n + p) = " << (++i) * (n + p) << std::endl;

    return 0;
}
