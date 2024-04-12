#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data data;
    double price;

    unsigned total_units_sold = 0;
    double total_revenue = 0.0;

    while (std::cin >> data.bookNo >> data.units_sold >> price)
    {
        total_units_sold += data.units_sold;
        total_revenue += data.units_sold * price;
    }

    std::cout << data.bookNo << " " << total_units_sold << " " << total_revenue << " "
              << total_revenue / total_units_sold << std::endl;

    return 0;
}