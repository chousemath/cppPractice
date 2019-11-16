#include <iostream>

double square(double x) {
    return x * x;
}

void printSquare(double x) {
    std::cout
        << "The square of "
        << x
        << " is "
        << square(x)
        << std::endl;
}

int main() {
    double x = 123.321;
    printSquare(x);
    return 0;
}
