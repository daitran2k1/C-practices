#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("Hello World!");

    // decltype(s.size()) start = 0;

    // while (start < s.size())
    // {
    //     s[start] = 'X';
    //     ++start;
    // }

    for (decltype(s.size()) start = 0; start < s.size(); ++start)
        s[start] = 'X';

    cout << s << endl;

    return 0;
}