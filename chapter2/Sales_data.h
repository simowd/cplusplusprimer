#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
    std::string ISBN;
    unsigned int quantity = 0;
    double total = 0.0;
};

#endif
