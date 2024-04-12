#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data data1;
    double price;

    while (std::cin >> data1.bookNo >> data1.units_sold >> price)
        std::cout << data1.bookNo << " " << data1.units_sold << " " << price << std::endl;

    return 0;
}