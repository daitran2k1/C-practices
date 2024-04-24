#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

vector<int>::iterator contain(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    while (beg != end){
        if (*beg++ == val)
            return beg;
    }

    return end;
}

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator beg = ivec.begin(), end = ivec.end();

    vector<vector<int>::iterator> res{contain(beg, end, 3), contain(beg+3, end, 3)};

    for (auto it : res)
    {
        if (it != end)
            cout << it - beg << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}