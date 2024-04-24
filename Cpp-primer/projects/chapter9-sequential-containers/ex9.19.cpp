#include <iostream>
#include <string>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

int main()
{
    string s;
    list<string> slst;

    while (cin >> s)
        slst.push_back(s);

    for (auto s : slst)
        cout << s << endl;

    return 0;
}