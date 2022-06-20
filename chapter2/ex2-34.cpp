#include <iostream>

int main() {
    int i = 0, &r = i;
    const int ci = i, &cr = ci;

    auto a = r; // int
    auto b = ci; // int
    auto c = cr; // int
    auto d = &i; // int*
    auto e = &ci; // const int*
    auto const f = ci; // const int
    auto &g = ci; // const int &

    std::cout << "Before=" << a << std::endl;
    a = 15;
    std::cout << "After=" << a << std::endl;

    std::cout << "Before=" << b << std::endl;
    b = 15;
    std::cout << "After=" << b << std::endl;

    std::cout << "Before=" << c << std::endl;
    c = 15;
    std::cout << "After=" << c << std::endl;

    std::cout << "Before=" << d << std::endl;
    d = &c;
    std::cout << "After=" << d << std::endl;

    std::cout << "Before=" << e << std::endl;
    e = &cr;
    std::cout << "After=" << e << std::endl;

    std::cout << "Before=" << f << std::endl;
    //f = 15; It's a constant
    std::cout << "After=" << f << std::endl;

    std::cout << "Before=" << g << std::endl;
    //g = 15; It's a constant
    std::cout << "After=" << g << std::endl;


    return 0;
}
