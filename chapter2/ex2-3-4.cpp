#include <iostream>

int main() {
    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl; // Output: 32
    std::cout << u - u2 << std::endl; // Output: Round back minus 32
    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl; // Output: 32
    std::cout << i - i2 << std::endl; // Output: -32

    std::cout << i - u << std::endl; // Output: 0
    std::cout << u - i << std::endl; // Output: 0

    return 0;
}
