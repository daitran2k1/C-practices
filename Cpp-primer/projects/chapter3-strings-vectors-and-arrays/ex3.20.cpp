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

    for (decltype(ivec.size()) i = 0; i < ivec.size() - 1; ++i)
        cout << ivec[i] + ivec[i+1] << endl;

    for (decltype(ivec.size()) i = 0; i < ivec.size() / 2; ++i)
        cout << ivec[i] + ivec[ivec.size() - 1 - i] << endl;

    return 0;
}