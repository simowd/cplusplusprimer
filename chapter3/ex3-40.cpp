#include <iostream>
#include <string>
#include <cstring>

using std::string;

int main(){
    string a = "This is a string", b = "This is another string";
    const char *first = a.c_str();
    const char *second = b.c_str();

    char third[255];
    strcpy(third, first);
    strcat(third, second);

    std::cout << third << std::endl;

    return 0;
}
