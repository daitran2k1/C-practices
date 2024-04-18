#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = -30 * 3 + 21 / 5;   // -86
    cout << a << endl;
    int b = -30 + 3 * 21 / 5;   // -18
    cout << b << endl;
    int c = 30 / 3 * 21 % 5;    // 0
    cout << c << endl;
    int d = -30 / 3 * 21 % 4;   // -2
    cout << d << endl;

    return 0;
}