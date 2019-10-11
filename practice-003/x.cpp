#include <iostream>

double square(double x) {
  return x * x;
}

void printSquare(double x) {
  std::cout << "The square of "
            << x
            << " is "
            << square(x)
            << "!\n";
}

int main() {
  printSquare(1.234);
  return 0;
}
