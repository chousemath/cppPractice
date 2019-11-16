#include <iostream>
#include <cmath>

bool kToK(int n, int k);
bool kToK2(int n, int k);

int main() {
    std::cout << kToK(4, 2) << std::endl;
    std::cout << kToK(387420489, 9) << std::endl;
    std::cout << kToK(17, 3) << std::endl;
    return 0;
}

bool kToK(int n, int k) {
    int temp = 1;
    for (int i = 0; i < k; i++) temp *= k;
    return temp == n;
}
bool kToK2(int n, int k) {
    return pow(k, k) == n;
}

