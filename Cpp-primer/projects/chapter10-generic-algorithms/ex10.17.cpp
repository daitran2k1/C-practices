#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::sort;
using std::vector;

class Sales_data
{
    public:
        Sales_data() = default;
        Sales_data(const string &s, unsigned num, double price): bookNo(s), units_sold(num), revenue(num * price) {}
        string isbn() const { return bookNo; }

        void print() { cout << bookNo << ", " << units_sold << ", " << revenue << endl; }

    private:
        string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;
};

int main()
{
    vector<Sales_data> vec{Sales_data(), Sales_data("123", 3, 3.3), Sales_data("456", 2, 7.7), Sales_data("113", 10, 0.0)};
    sort(vec.begin(), vec.end(), [] (const Sales_data &data1, const Sales_data &data2) { return data1.isbn() < data2.isbn(); });

    for (auto &data : vec)
        data.print();

    return 0;
}