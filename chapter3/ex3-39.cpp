#include <iostream>
#include <cstring>
#include <string>

using std::string;

int main(){
    string a = "hello", b = "hello";
    char c[] = "bye", d[] = "bye";

    if (a == b)
        std::cout << "Strings are equal" << std::endl;

    if(strcmp(c,d) == 0)
        std::cout << "C Strings are equal" << std::endl;

    return 0;
}
