#include <iostream>

int nextEdge(int s1, int s2);

int main() {
    int s1 = 8;
    int s2 = 10;
    std::cout
        << "If you have a triange with side1="
        << s1
        << " and side2="
        << s2
        << ", the max range of the third edge must be "
        << nextEdge(s1, s2)
        << std::endl;
    return 0;
}

int nextEdge(int s1, int s2) {
    return (s1 + s2) - 1;
}
