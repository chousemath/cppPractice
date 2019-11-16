#include <iostream>

int addition(int x);
int main() {
    std::cout << addition(55) << std::endl;
    return 0;
}
int addition(int x) {
    return x + 1;
}
