#include <iostream>
#include <forward_list>

using std::cout;
using std::endl;
using std::forward_list;

int main()
{
    forward_list<int> ifl{1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto prev = ifl.before_begin();
    auto cur = ifl.begin();

    while (cur != ifl.end())
    {
        if (*cur % 2)
            cur = ifl.erase_after(prev);
        else
        {
            prev = cur;
            ++cur;
        }
    }

    for (auto i : ifl)
        cout << i << endl;

    return 0;
}