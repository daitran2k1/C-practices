#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Sales_data
{
    string isbn() const { return bookNo;}
    Sales_data& combine(const Sales_data &);
    double avg_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;

    return 0;
}

int main()
{
    Sales_data curData, data;
    double curPrice, price;

    if (cin >> curData.bookNo >> curData.units_sold >> curPrice)
    {
        curData.revenue = curData.units_sold * curPrice;

        while (cin >> data.bookNo >> data.units_sold >> price)
        {
            data.revenue = data.units_sold * price;
            if (curData.bookNo == data.bookNo)
                curData.combine(data);
            else
            {
                cout << curData.bookNo << " " << curData.units_sold << " " << curData.revenue << " "
                     << curData.avg_price() << endl;
                curData = data;
            }
        }
        cout << curData.bookNo << " " << curData.units_sold << " " << curData.revenue << " "
             << curData.avg_price() << endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    

    return 0;
}