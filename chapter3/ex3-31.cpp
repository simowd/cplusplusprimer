#include <iostream>

int main() {
    constexpr size_t unsigned size = 10;
    int ia[size];

    for(int i = 0; i < size; ++i)
        ia[i] = i;

    return 0;
}
