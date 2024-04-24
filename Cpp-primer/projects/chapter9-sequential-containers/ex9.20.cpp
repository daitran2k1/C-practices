#include <iostream>
#include <list>
#include <deque>

using std::cout;
using std::endl;
using std::list;
using std::deque;

int main()
{
    list<int> ilst{1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> idq_odd, idq_even;

    for (auto i : ilst)
    {
        if (i % 2)
            idq_odd.push_back(i);
        else
            idq_even.push_back(i);
    }

    for (auto i : idq_odd)
        cout << i << " ";

    cout << endl;
    for (auto i : idq_even)
        cout << i << " ";

    return 0;
}