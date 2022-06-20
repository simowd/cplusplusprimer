#include <iostream>

int main() {
    const int i = 42;
    auto j = i; const auto &k = i; auto *p = &i; // int, const int&, int*
    const auto j2 = i, &k2 = i; // const int, const int&
    return 0;
}
