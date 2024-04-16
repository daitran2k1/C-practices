#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s, result;
    cin >> s;

    for (char c : s)
        if (!ispunct(c))
            result += c;

    cout << result;

    return 0;
}