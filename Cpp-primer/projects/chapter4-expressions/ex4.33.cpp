#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int x = 0, y = 1;
    cout << (0 ? ++x, ++y : --x, --y) << endl;
    cout << x << " " << y << endl;

    return 0;
}