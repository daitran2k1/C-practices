#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec;
    int v;

    while (cin >> v)
        ivec.push_back(v);

    for (auto it = ivec.cbegin(); it != ivec.cend() - 1; ++it)
        cout << *it + *(it+1) << endl;

    for (auto beg = ivec.cbegin(), end = ivec.cend() - 1; beg < end; ++beg, --end)
        cout << *beg + *end << endl;

    return 0;
}