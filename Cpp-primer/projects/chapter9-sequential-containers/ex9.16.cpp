#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
    list<int> ilst{1, 2, 3};
    vector<int> ivec{1, 2, 3};

    if (ilst.size() != ivec.size())
        cout << "Not equal" << endl;
    else
    {
        int flag = 1;
        vector<int>::const_iterator itv;
        list<int>::const_iterator itl;

        for (itl = ilst.cbegin(), itv = ivec.cbegin(); itl != ilst.cend() && itv != ivec.cend(); ++itl, ++itv)
            if (*itl != *itv)
            {
                flag = 0;
                break;
            }

        if (flag)
            cout << "Equal" << endl;
        else
            cout << "Not equal" << endl;
    }

    return 0;
}