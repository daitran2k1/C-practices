#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << [] (int a, int b) { return a + b; }(a, b) << endl;

    return 0;
}