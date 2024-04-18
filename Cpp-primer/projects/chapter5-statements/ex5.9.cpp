#include <iostream>

using std::cin;
using std::cout;
using std::endl; 

int main()
{
    char c;
    int uCnt = 0, eCnt = 0, oCnt = 0, aCnt = 0, iCnt = 0;
    while (cin >> c)
        if (c == 'u')
            ++uCnt;
        else if (c == 'e')
            ++eCnt;
        else if (c == 'o')
            ++oCnt;
        else if (c == 'a')
            ++aCnt;
        else if (c == 'i')
            ++iCnt;

    cout << uCnt << " " << eCnt << " " << oCnt << " " << aCnt << " " << iCnt << endl;

    return 0;
}