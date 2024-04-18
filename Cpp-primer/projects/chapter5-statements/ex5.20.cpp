#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string currString, prevString;
    int flag = 0;

    while (cin >> currString)
    {
        if (currString == prevString)
        {
            cout << currString << endl;
            flag = 1;
            break;
        }
        prevString = currString;
    }

    if (!flag)
        cout << "No word was repeated" << endl;

    return 0;
}