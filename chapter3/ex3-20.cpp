#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::cin;
using std::cout; using std::endl;
using std::vector;
using std::string;

int main() {
    int data;
    vector<int> numbers;

    while(cin >> data)
        numbers.push_back(data);

    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] + numbers[i + 1] << endl;
        cout << numbers[i] + numbers[numbers.size() - i] << endl;
    }
    return 0;
}
