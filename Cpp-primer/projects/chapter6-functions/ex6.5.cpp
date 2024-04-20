#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int abs(int val)
{
    if (val < 0)
        val = -val;
    
    return val;
}

int main()
{
    int v;
    cin >> v;
    cout << abs(v) << endl;

    return 0;
}