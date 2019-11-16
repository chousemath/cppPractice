#include <iostream>

int main() {
    int num1;
    std::cin >> num1;
    int num2;
    std::cin >> num2;
    std::cout
        << "The sum of "
        << num1
        << " and "
        << num2
        << " is "
        << num1 + num2
        << std::endl;
    return 0;
}
