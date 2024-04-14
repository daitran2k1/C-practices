#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int main()
{
    cout << "Enter two numbers:" << endl;
    int v1, v2;
    cin >> v1 >> v2;
    if (v1 > v2)
    {
        int tmp = v1;
        v1 = v2;
        v2 = tmp;
    }

    while (v1 <= v2)
    {
        cout << v1 << endl;
        ++v1;
    }

    return 0;
}