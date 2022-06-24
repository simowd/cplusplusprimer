#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;

int main() {
    string input;
    vector<string> words;

    while(cin >> input) {
        words.push_back(input);
    }

    for(auto word : words) {
        for(auto &c : word) {
           c = toupper(c);
        }

        cout << word << endl;
    }
    return 0;   
}
