#include <iostream>
#include <vector>
#include <list>

using std::cout;
using std::endl;
using std::vector;
using std::list;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> ivec(ia, ia + sizeof(ia) / sizeof(ia[0]));
    list<int> ilst(ia, ia + sizeof(ia) / sizeof(ia[0]));

    auto lbeg = ilst.begin();
    while (lbeg != ilst.end())
    {
        if (*lbeg % 2)
            lbeg = ilst.erase(lbeg);
        else
            ++lbeg;
    }

    for (auto i : ilst)
        cout << i << " ";

    auto vbeg = ivec.begin();
    while (vbeg != ivec.end())
    {
        if (*vbeg % 2 == 0)
            vbeg = ivec.erase(vbeg);
        else
            ++vbeg;
    }

    cout << endl;
    for (auto i : ivec)
        cout << i << " ";
    
    return 0;
}