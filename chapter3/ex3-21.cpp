#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout; using std::endl;

int main(){
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    for(auto it = v2.cbegin(); it != v2.cend() ;++it) {
        cout << *it << endl;
    }

    cout << v2.size() << endl;

    return 0;
}
