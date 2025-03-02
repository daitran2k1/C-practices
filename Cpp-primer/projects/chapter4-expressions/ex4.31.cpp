#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivec(10);
    vector<int>::size_type cnt = ivec.size();

    for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;

    for (int v : ivec)
        cout << v << endl;

    return 0;
}