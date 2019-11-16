#include <iostream>

int convert(int minutes);

int main() {
    int minutes = 10;
    std::cout
        << minutes
        << " minutes is "
        << convert(minutes)
        << " seconds."
        << std::endl;
    return 0;
}

int convert(int minutes) {
    return 60 * minutes;
}
