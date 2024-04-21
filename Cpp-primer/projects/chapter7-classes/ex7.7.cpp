#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

struct Sales_data
{
    string isbn() const
    {
        return bookNo;
    }

    Sales_data &combine(const Sales_data &);
    double avg_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs)
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

Sales_data add(const Sales_data &data1, const Sales_data &data2)
{
    Sales_data sum = data1;
    sum.combine(data2);

    return sum;
}

istream &read(istream &is, Sales_data &data)
{
    double price;
    is >> data.bookNo >> data.units_sold >> price;
    data.revenue = data.units_sold * price;

    return is;
}

ostream &print(ostream &os, const Sales_data &data)
{
    os << data.bookNo << " " << data.units_sold << " "
       << data.revenue << " " << data.avg_price();

    return os;
}

int main()
{
    Sales_data curData, data;

    if (read(cin, curData))
    {
        while (read(cin, data))
        {
            if (curData.bookNo == data.bookNo)
                curData.combine(data);
            else
            {
                print(cout, curData) << endl;
                curData = data;
            }
        }
        print(cout, curData) << endl;
    }
    else
    {
        std::cerr << "No data?!" << endl;
        return -1;
    }
    
    return 0;
}