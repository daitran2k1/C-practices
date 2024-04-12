#include <iostream>
#include <string>

struct Sales_data 
{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data data1, data2;
    double price1, price2;
    std::cin >> data1.bookNo >> data1.units_sold >> price1;
    std::cin >> data2.bookNo >> data2.units_sold >> price2;

    unsigned total_units_sold = data1.units_sold + data2.units_sold;
    double total_revenue = data1.units_sold * price1 + data2.units_sold * price2;

    std::cout << data1.bookNo << " " << total_units_sold << " " << total_revenue  << " "
              << total_revenue / total_units_sold << std::endl;

    return 0;
}