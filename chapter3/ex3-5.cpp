#include <iostream>
#include <string>

using std::cin;
using std::cout; using std::endl;
using std::string;

int main() {
    string c, b;
    while(cin >> c) {
       b += c + " "; 
    }

    cout << b << endl;
    return 0;
}
