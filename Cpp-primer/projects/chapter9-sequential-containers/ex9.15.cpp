#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec1{1, 2, 3}, ivec2{1, 2, 3};

    if (ivec1 == ivec2)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;

    return 0;
}