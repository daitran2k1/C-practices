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
    Sales_data data1;
    double price;

    while (std::cin >> data1.bookNo >> data1.units_sold >> price)
        std::cout << data1.bookNo << " " << data1.units_sold << " " << price << std::endl;

    return 0;
}