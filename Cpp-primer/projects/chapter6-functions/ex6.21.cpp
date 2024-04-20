#include <iostream>

using std::cout;
using std::endl;

int compare(int a, const int *pb)
{
    if (a > *pb)
        return a;

    return *pb;
}

int main()
{
    int a = 3, b = 6;
    cout << compare(a, &b) << endl;

    return 0;
}