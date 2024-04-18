#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string currString, prevString, maxString;
    int currCnt = 0, maxCnt = 0;

    while (cin >> currString)
    {
        if (currString == prevString)
        {
            ++currCnt;
            if (currCnt > maxCnt)
            {
                maxString = currString;
                maxCnt = currCnt;
            }
        }
        else
            currCnt = 1;
        prevString = currString;
    }

    cout << "The word \"" << maxString << "\" occurred " << maxCnt << " times" << endl;

    return 0;
}