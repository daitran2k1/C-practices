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
    Sales_data currData, data;
    double currPrice, price;

    unsigned total_units_sold = 0;
    double total_revenue = 0.0;

    if (std::cin >> currData.bookNo >> currData.units_sold >> currPrice)
    {
        total_units_sold = currData.units_sold;
        total_revenue = currData.units_sold * currPrice;

        while (std::cin >> data.bookNo >> data.units_sold >> price)
        {
            if (currData.bookNo == data.bookNo)
            {
                total_units_sold += data.units_sold;
                total_revenue += data.units_sold * price;
            }
            else
            {
                std::cout << currData.bookNo << " " << total_units_sold << " " << total_revenue << " "
                          << total_revenue / total_units_sold << std::endl;
                currData = data;
                total_units_sold = data.units_sold;
                total_revenue = data.units_sold * price;
            }
        }
        std::cout << currData.bookNo << " " << total_units_sold << " " << total_revenue << " "
                          << total_revenue / total_units_sold << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}