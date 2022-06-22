#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cin;
using std::cout; using std::endl;

int main() {
    string s;    
    getline(cin, s);
    string wp;

    for(char c : s){
        if(!ispunct(c)) {
           wp += c; 
        }
    }

    cout << wp << endl;

    return 0;
}
