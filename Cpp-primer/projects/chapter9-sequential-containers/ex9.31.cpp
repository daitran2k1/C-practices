#include <list>
#include <forward_list>
#include <iostream>

using std::cout;
using std::endl;
using std::list;
using std::forward_list;

int main()
{
    list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = li.begin();
    while (iter != li.end())
    {
        if (*iter % 2)
        {
            iter = li.insert(iter, *iter);
            ++iter; ++iter;
        }
        else
            iter = li.erase(iter);
    }
    for (auto i : li)
        cout << i << " ";
    cout << endl;

    forward_list<int> fli = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto prev = fli.before_begin();
    auto cur = fli.begin();
    while (cur != fli.end())
    {
        if (*cur % 2)
        {
            cur = fli.insert_after(cur, *cur);
            prev = cur;
            ++cur;
        }
        else
            cur = fli.erase_after(prev);
    }
    for (auto i : fli)
        cout << i << " ";
    cout << endl;

    return 0;
}