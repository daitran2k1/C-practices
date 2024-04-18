#include <iostream>

using std::cin;
using std::cout;
using std::endl; 

int main()
{
    char c;
    int uCnt = 0, eCnt = 0, oCnt = 0, aCnt = 0, iCnt = 0, sCnt = 0, tCnt = 0, nCnt = 0;
    while (cin >> c)
        switch (c)
        {
            case 'u': case 'U':
                ++uCnt;
                break;
            case 'e': case 'E':
                ++eCnt;
                break;
            case 'o': case 'O':
                ++oCnt;
                break;
            case 'a': case 'A':
                ++aCnt;
                break;
            case 'i': case 'I':
                ++iCnt;
                break;
            case ' ':
                ++sCnt;
                break;
            case '\t':
                ++tCnt;
                break;
            case '\n':
                ++nCnt;
                break;
        }

    cout << uCnt << " " << eCnt << " " << oCnt << " " << aCnt << " " << iCnt << endl;

    return 0;
}