#include <iostream>

int addition(int x, int y);

int main() {
    int x = 123;
    int y = 321;
    std::cout
        << x
        << " + "
        << y
        << " = "
        << addition(x, y)
        << std::endl;
    return 0;
}

int addition(int x, int y) {
    return x + y;
}
