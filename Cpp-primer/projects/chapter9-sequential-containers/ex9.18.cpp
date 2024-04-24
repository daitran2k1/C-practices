#include <iostream>
#include <string>
#include <deque>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::deque;

int main()
{
    string s;
    deque<string> sdq;

    while (cin >> s)
        sdq.push_back(s);

    for (auto s : sdq)
        cout << s << endl;

    return 0;
}