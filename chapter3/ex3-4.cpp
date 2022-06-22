#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout; using std::endl;

int main() {
    string s1, s2;    
    cout << "Enter a string" << endl;
    getline(cin, s1);
    cout << "Enter another string" << endl;
    getline(cin, s2);

    if(s1 == s2){
        cout << "Both strings are equal" << endl;
    }

    if(s1.size() > s2.size()){
        cout << "First string is longer" << endl;
    }
    else {
        cout << "Second string is longer" << endl;
    }

   return 0;
}
