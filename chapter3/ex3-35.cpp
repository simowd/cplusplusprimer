#include <iostream>

using std::begin;
using std::end;

int main(){
    int data[] = {10,10,10,10,10,10,10,10};
    int *beg = begin(data);
    int *en = end(data);

    for (auto i = beg; beg != en; ++i){
        *i = 0;
    }
    return 0;
}
