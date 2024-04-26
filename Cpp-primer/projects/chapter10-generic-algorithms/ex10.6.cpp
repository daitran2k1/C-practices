#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::fill_n;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    fill_n(ivec.begin(), ivec.size(), 0);

    for (auto i : ivec)
        cout << i << endl;

    return 0;
}