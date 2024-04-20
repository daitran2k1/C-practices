#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

bool contain_upper(const string &s)
{
    for (auto c : s)
        if (isupper(c))
            return true;

    return false;
}

int main()
{
    string s("Hello, World!");

    if (contain_upper(s))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}