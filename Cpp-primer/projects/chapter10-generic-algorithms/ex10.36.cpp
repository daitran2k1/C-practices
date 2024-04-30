#include <iostream>
#include <list>
#include <algorithm>

using std::cout;
using std::endl;
using std::list;
using std::find;

int main()
{
    list<int> ilst{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 0, 1, 2};

    auto pos = find(ilst.rbegin(), ilst.rend(), 0);

    return 0;
}