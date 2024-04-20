#include <iostream>

using std::cout;
using std::endl;

void reset(int &val)
{
    val = 6;
}

int main()
{
    int i = 3;
    cout << i << endl;
    reset(i);
    cout << i << endl;

    return 0;
}