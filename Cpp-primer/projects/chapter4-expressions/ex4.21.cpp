#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int &v : ivec)
        v = (v % 2) ? v * 2 : v;

    for (int v : ivec)
        cout << v << endl;

    return 0;
}