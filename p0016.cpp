#include <iostream>

double triArea(int base, int height);

int main() {
    int base = 123;
    int height = 555;
    std::cout
        << "If the base of a triangle is "
        << base
        << " and its height is "
        << height
        << " then its area must be "
        << triArea(base, height)
        << std::endl;
    return 0;
}
double triArea(int base, int height) {
    return 0.5 * base * height;
}
