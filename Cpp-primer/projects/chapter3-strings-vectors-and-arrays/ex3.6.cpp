#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("Hello World!");

    for (char &c : s)
        c = 'X';

    cout << s << endl;

    return 0;
}