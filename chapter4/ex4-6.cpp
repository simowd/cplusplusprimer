#include <iostream>

using std::cout; using std::endl;
using std::cin;

int main(){
    int a;
    cin >> a;
    if(a % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;
    return 0;
}
