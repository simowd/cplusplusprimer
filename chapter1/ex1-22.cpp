#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item currentItem, finalItem;
    std::cout << "Reading files" << std::endl;
    while(std::cin >> currentItem) {
        finalItem += currentItem;
    }

    std::cout << finalItem << std::endl;
    return 0;
}
