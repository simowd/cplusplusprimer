//It will work in the same way.
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout; using std::endl;

int main() {
    string s = "This is a String";
    string t = "This is a String";
    string u = "This is a String";
    for(char &c : s)
        c = 'X';
    
    decltype(t.size()) c = 0;
    while(c < t.size()) {
        t[c] = 'X';
        ++c;
    }

    for (decltype(u.size()) i = 0; i <= u.size(); i++) {
        u[i] = 'X';
    }

    cout << s << endl;
    cout << t << endl;
    cout << u << endl;
    return 0;
}
