#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::vector;
using std::string;
using std::cin;
using std::cout; using std::endl;

int main(){
    vector<string> text = {"This is a long text", "This is another text"};
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){
        for (auto sit = it->begin(); sit != it->end(); ++sit)
            *sit = toupper(*sit);

        cout << *it << endl;
    }
    return 0;
}
