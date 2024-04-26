#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << [a] (int b) { return a + b; }(b) << endl;

    return 0;
}