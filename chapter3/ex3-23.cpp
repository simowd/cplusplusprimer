#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::vector;
using std::string;
using std::cin;
using std::cout; using std::endl;

int main(){
    vector<int> data{1,2,3,4,5,6,7,8,9,10};
    for(auto it = data.begin(); it != data.end(); ++it) {
        *it = *it * 2;
        cout << *it << endl;
    }
    return 0;
}
