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

    for (int i = 0; i < 10; ++i)
    {
        cin >> v;
        ivec.push_back(v);
    }

    for (auto it = ivec.begin(); it != ivec.end(); ++it)
        *it *= 2;

    for (auto i : ivec)
        cout << i << " ";

    return 0;
}