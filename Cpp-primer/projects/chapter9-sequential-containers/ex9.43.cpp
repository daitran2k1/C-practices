#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("thoabcthothabcotabchothooo"), oldVal("tho"), newVal("though");

    auto iter = s.begin();

    while (iter != s.end() - oldVal.size() + 1)
    {
        string tmp(iter, iter + oldVal.size());
        if (tmp == oldVal)
        {
            iter = s.erase(iter, iter + oldVal.size());
            iter = s.insert(iter, newVal.begin(), newVal.end());
            iter += newVal.size();
        }
        else
            ++iter;
    }

    cout << s << endl;

    return 0;
}