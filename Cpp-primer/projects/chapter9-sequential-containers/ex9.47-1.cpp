#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("ab2c3d7R4E6");
    string alphabet("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYYZ");
    string number("0123456789");

    string::size_type i = 0, pos = 0;
    while ((pos = s.find_first_of(alphabet, pos)) != string::npos)
    {
        cout << s[pos];
        ++pos;
    }
    cout << endl;
    pos = 0;
    while ((pos = s.find_first_of(number, pos)) != string::npos)
    {
        cout << s[pos];
        ++pos;
    }

    return 0;
}