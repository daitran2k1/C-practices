#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int arr[10] = {};

    for (int i = 0; i < 10; i++)
        arr[i] = i;

    for (auto &v : arr)
        cout << v << endl;

    return 0;
}