#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::vector;
using std::string;
using std::cin;
using std::cout; using std::endl;

int main(){
    vector<int> vi;
    int data;

    while(cin >> data)
        vi.push_back(data);

    for (auto it = vi.cbegin(); it != vi.cend() && !vi.empty(); ++it)
        cout << *it + *(it + 1) << endl;
    return 0;
}
