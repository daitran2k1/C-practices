#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int i = 2;
    double d = 3.1415;

    // cout << (i *= d) << endl;   // 6?
    cout << (i *= static_cast<int> (d)) << endl;    // 6

    return 0;
}