#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout; using std::endl;

int main() {
    string s = "This is a String";
    for(auto &c : s)
        c = 'X';

    cout << s << endl;
    return 0;
}
