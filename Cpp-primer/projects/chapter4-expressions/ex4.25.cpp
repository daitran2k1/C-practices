#include <iostream>

using std::cout;
using std::endl;

int main()
{
    char v = 'q';
    cout << v << endl;
    cout << (~v << 6) << endl;
    /* v                  01110001(2)
     * ~v       24-bits-1 10001110(2)
     * ~v << 6  16-bits-1 11100011 10000000(2) = -7296(10)
     */

    return 0;
}