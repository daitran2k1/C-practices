#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::vector;
using std::sort;
using std::find_if;
using std::accumulate;
using std::istream_iterator;
using std::ostream_iterator;

bool compareIsbn(const Sales_item &item1, const Sales_item &item2)
{
    return item1.isbn() < item2.isbn();
}

int main()
{
    istream_iterator<Sales_item> in(cin), end;
    vector<Sales_item> item_vec(in, end);

    sort(item_vec.begin(), item_vec.end(), compareIsbn);

    ostream_iterator<Sales_item> out(cout, "\n");

    auto pbeg = item_vec.begin();

    while (pbeg != item_vec.end())
    {
        Sales_item sum(pbeg->isbn());
        auto pos = find_if(pbeg, item_vec.end(), [pbeg] (const Sales_item &item) { return item.isbn() != pbeg->isbn(); });
        sum = accumulate(pbeg, pos, sum);
        out = sum;
        pbeg = pos;
    }

    return 0;
}