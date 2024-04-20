#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void to_lower(string &s)
{
    for (auto &c : s)
        c = tolower(c);
}

int main()
{
    string s("Hello, World!");
    to_lower(s);
    cout << s << endl;

    return 0;
}