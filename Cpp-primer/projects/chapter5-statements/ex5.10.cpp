#include <iostream>

using std::cin;
using std::cout;
using std::endl; 

int main()
{
    char c;
    int uCnt = 0, eCnt = 0, oCnt = 0, aCnt = 0, iCnt = 0;
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
        }

    cout << uCnt << " " << eCnt << " " << oCnt << " " << aCnt << " " << iCnt << endl;

    return 0;
}