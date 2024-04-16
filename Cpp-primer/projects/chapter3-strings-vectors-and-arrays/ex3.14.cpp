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

    for (int i : ivec)
        cout << i << endl;

    return 0;
}