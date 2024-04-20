#include <iostream>

using std::cout;
using std::endl;

void print(const int *v)
{
    cout << *v << endl;
}

void print(const int *beg, const int *end)
{
    while (beg != end)
        cout << *beg++ << endl;
}

void print(const int *ia, size_t sz)
{
    for (size_t i = 0; i != sz; ++i)
        cout << ia[i] << endl;
}

void print(const int (&ia)[2])
{
    for (auto i : ia)
        cout << i << endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print(&i);
    print(j, j+2);
    print(j, 2);
    print(j);

    return 0;
}