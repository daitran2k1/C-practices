#include <iostream>
#include <forward_list>
#include <string>

using std::cout;
using std::endl;
using std::forward_list;
using std::string;

void find_and_add(forward_list<string> &sfl, string s1, string s2)
{
    auto prev = sfl.before_begin();
    auto cur = sfl.begin();

    int flag = 0;

    while (cur != sfl.end())
    {
        if (*cur == s1)
        {
            prev = cur;
            cur = sfl.insert_after(prev, s2);
            flag = 1;
        }
        else
        {
            ++prev;
            ++cur;
        }
    }

    if (!flag)
        cur = sfl.insert_after(prev, s2);
}

int main()
{
    forward_list<string> sfl{"a", "b", "c", "d", "hello", "x", "y", "z", "hello", "world", "!"};

    find_and_add(sfl, "hello", "i'm Dai");

    for (auto s : sfl)
        cout << s << endl;

    return 0;
}