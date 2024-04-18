#include <iostream>

using std::cout;
using std::endl;

int main()
{
    unsigned long ul1 = 3, ul2 = 7;
    /* ul1  24-bits-0 00000011(2)
     * ul2  24-bits-0 00000111(2)
    */
    cout << (ul1 & ul2) << endl;    // 24-bits-0 00000011(2) = 3(10)
    cout << (ul1 | ul2) << endl;    // 24-bits-0 00000111(2) = 7(10)
    cout << (ul1 && ul2) << endl;   // 1
    cout << (ul1 || ul2) << endl;   // 1

    return 0;
}