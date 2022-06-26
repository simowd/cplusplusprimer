#include <iostream>
#include <vector>

using std::vector;
using std::begin; using std::end;

int main(){
    int a[5] = {1,2,3,4,5};
    vector<int> va(begin(a), end(a));
    return 0;
}
