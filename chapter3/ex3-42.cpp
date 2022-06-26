#include <iostream>
#include <vector>

using std::vector;

int main(){
    const size_t unsigned size = 5;
    vector<int> va(10, size);
    int ix[size];
    for(int i = 0; i < size; ++i)
        ix[i] = va[i];

    return 0;
}
