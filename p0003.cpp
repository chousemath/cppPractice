#include <iostream>

int main() {
    int myNum = 1234;
    myNum += 4321;
    std::cout << "My num is now: " << myNum << std::endl;
    int copyNum = myNum;
    copyNum += 99;
    std::cout << "My num is still: " << myNum << std::endl;
    std::cout << "My copy is: " << copyNum << std::endl;
    printf("My num is %i, and my copy is %i\n", myNum, copyNum);
    return 0;
}
