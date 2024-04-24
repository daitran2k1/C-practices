#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
    list<int> ilst{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> ivec{-1, -2, -3, -4, -5, -6, -7, -8, -9};

    vector<double> dvec1(ilst.begin(), ilst.end());
    for (auto d : dvec1)
        cout << d << endl;

    vector<double> dvec2(ivec.begin(), ivec.end());
    for (auto d : dvec2)
        cout << d << endl;

    return 0;
}