#include <iostream>

int main(){
    int var1 = 0, var2= 0;
    std::cout << "Enter two numbers (The first one has to be the smallest)" << std::endl;
    std::cin >> var1 >> var2;
    while(var1 <= var2){
        std::cout << var1 << std::endl; 
        ++var1;
    }
    return 0;
}
