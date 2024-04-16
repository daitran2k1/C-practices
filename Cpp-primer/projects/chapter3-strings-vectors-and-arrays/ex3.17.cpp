#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> svec;
    string s;

    while (cin >> s)
        svec.push_back(s);

    for (string &s : svec)
        for (auto &c : s)
            c = toupper(c);

    int cnt = 0;
    for (string s : svec)
    {
        cout << s << " ";
        ++cnt;
        if (cnt % 8 == 0)
            cout << endl;
    }

    return 0;
}