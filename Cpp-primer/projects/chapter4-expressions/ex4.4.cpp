#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    cout << a << endl;
    int b = (((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2);
    cout << b << endl;

    return 0;
}