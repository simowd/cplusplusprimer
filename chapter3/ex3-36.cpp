#include <iostream>
#include <vector>

using std::vector;

int main(){
    const size_t unsigned s = 3;
    int a[] = {10,10,10};
    int b[] = {10,10,10};
    bool areEqual = true;

    for(int i = 0; i < s; ++i){
        if(a[i] != b[i])
            areEqual = false;
    }

    std::cout << areEqual << std::endl;
    return 0;
}
