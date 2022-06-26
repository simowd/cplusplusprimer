#include <iostream>

int main(){
    int a = 0;
    while(a != 42 && std::cin >> a)
        if(a != 42)
            std::cout << "enters" << std::endl;

    return 0;
}
