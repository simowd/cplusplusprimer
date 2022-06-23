#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cin;

int main() {
    vector<string> nc;
    string a;

    while(getline(cin, a)) {
        nc.push_back(a);
    }

    return 0;
}
