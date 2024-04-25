#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("thoabcthothabcotabchothooo"), oldVal("tho"), newVal("though");

    string::size_type i = 0;

    while (i < s.size())
    {
        string tmp(s, i, oldVal.size());

        if (tmp == oldVal)
        {
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size();
        }
        else
            ++i;
    }

    cout << s << endl;

    return 0;
}