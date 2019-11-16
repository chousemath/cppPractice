#include <iostream>

bool lessThanOrEqualToZero(int x);

int main() {
    int x = 5;
    int y = -5;

    std::cout
        << lessThanOrEqualToZero(x)
        << ", "
        << lessThanOrEqualToZero(y)
        << std::endl;
    return 0;
}

bool lessThanOrEqualToZero(int x) {
    return x <= 0;
}
