#include <iostream>
#include "Sales_item.h"

int main () {
    Sales_item file, iterFile;
    if(std::cin >> file){
        int cnt = 1;
        while(std::cin >> iterFile){
            if(file.isbn() == iterFile.isbn()){
                ++cnt;
            }
            else {
                std::cout << file.isbn() << " occurs " << cnt << " times" << std::endl;
                file = iterFile;
                cnt = 1;
            }
        }
        std::cout << file.isbn() << " occurs " << cnt << " times" << std::endl;
    }
    return 0;
}
