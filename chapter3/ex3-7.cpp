//It will work in the same way.
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout; using std::endl;

int main() {
    string s = "This is a String";
    for(char &c : s)
        c = 'X';

    cout << s << endl;
    return 0;
}
