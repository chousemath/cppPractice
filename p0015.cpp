#include <iostream>

int squared(int a);
int main() {
    int a = 123;
    std::cout
        << "The square of "
        << a
        << " is "
        << squared(a)
        << std::endl;
    return 0;
}
int squared(int a) {
    return a * a;
}
