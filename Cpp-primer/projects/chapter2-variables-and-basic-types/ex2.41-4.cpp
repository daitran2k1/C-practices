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

    if (std::cin >> currData.bookNo >> currData.units_sold >> currPrice)
    {
        int cnt = 1;
        while (std::cin >> data.bookNo >> data.units_sold >> price)
        {
            if (currData.bookNo == data.bookNo)
                ++cnt;
            else
            {
                std::cout << currData.bookNo << " occurs " << cnt << " times" << std::endl;
                cnt = 1;
                currData = data;
            }
        }
        std::cout << currData.bookNo << " occurs " << cnt << " times" << std::endl;
    }

    return 0;
}