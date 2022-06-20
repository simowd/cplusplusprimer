#include <iostream>
#include "Sales_data.h"

int main() {
    Sales_data data1, data2;
    double price = 0;
    std::cin >> data1.ISBN >> data1.quantity >> price;
    data1.total = data1.quantity * price;
    std::cin >> data2.ISBN >> data2.quantity >> price;
    data2.total = data2.quantity * price;

    if (data1.ISBN == data2.ISBN) {
        unsigned totalCnt = data1.quantity + data2.quantity;
        double totalRevenue = data1.total + data2.total;
        std::cout << data1.ISBN << " " << totalCnt << " " << totalRevenue << " ";
        if (totalCnt != 0)
            std::cout << totalRevenue/totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        return 0;
    } else {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1; 
    }

    return 0;
}
