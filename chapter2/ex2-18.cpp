#include <iostream>

int main() {
    int a = 15;
    int b = 20;
    int c = 50;
    int *pa = &a;
    pa = &b;

    std::cout << b << " " << *pa << std::endl;

    *pa = c;
    std::cout << c << " " << *pa << std::endl;

    return 0;
}
