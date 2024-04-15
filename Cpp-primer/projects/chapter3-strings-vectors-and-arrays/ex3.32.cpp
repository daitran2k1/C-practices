#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    // int arr[10] = {};

    // for (int i = 0; i < 10; i++)
    //     arr[i] = i;

    // int b[10] = {};

    // for (int i = 0; i < 10; i++)
    //     b[i] = arr[i];

    // for (auto &v : b)
    //     cout << v << endl;

    vector<int> arr(10);

    for (auto it = arr.begin(); it != arr.end(); ++it)
        *it = it - arr.begin();

    vector<int> b;

    for (auto v : arr)
        b.push_back(v);

    for (auto &v : b)
        cout << v << endl;

    return 0;
}