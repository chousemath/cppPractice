#include <iostream>

bool isEqual(int x, int y);
int main() {
    int x = 5;
    int y = 6;
    std::cout << isEqual(x, y) << std::endl;
    return 0;
}

bool isEqual(int x, int y) {
    return x == y;
}
