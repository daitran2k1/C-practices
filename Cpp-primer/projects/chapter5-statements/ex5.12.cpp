#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    char currChar, prevChar;
    int ffCnt = 0, flCnt = 0, fiCnt = 0;
    while (cin >> currChar)
    {
        if (prevChar == 'f')
            switch (currChar)
            {
                case 'f':
                    ++ffCnt;
                    break;
                case 'l':
                    ++flCnt;
                    break;
                case 'i':
                    ++fiCnt;
                    break;
            }
        prevChar = currChar;
    }

    cout << ffCnt <<  " " << flCnt << " " << fiCnt << endl;

    return 0;
}