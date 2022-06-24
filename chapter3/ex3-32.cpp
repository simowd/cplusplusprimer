#include <iostream>
#include <vector>

using std::vector;

int main() {
    constexpr size_t unsigned size = 10;
    int ia[size];
    int ib[size];

    for(int i = 0; i < size; ++i)
        ia[i] = i;

    for(int i = 0; i < size; ++i)
        ib[i] = ia[i];

    vector<int> va(10);
    vector<int> vb(10);
    for(int i = 0; i < size; ++i)
        va[i] = i;

    vb = va;

    return 0;
}
