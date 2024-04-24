#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

bool contain(vector<int>::iterator beg, vector<int>::iterator end, int val)
{
    while (beg != end){
        if (*beg++ == val)
            return true;
    }

    return false;
}

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int>::iterator beg = ivec.begin(), end = ivec.end();

    cout << contain(beg, end, 3) << endl;
    cout << contain(beg+3, end, 3) << endl;
    cout << contain(beg, end-7, 3) << endl;

    return 0;
}