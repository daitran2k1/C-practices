#include <iostream>

using std::cout;
using std::endl;

void swap(int *pa, int *pb)
{
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main()
{
    int a = 3, b = 6;
    cout << a << " " << b << endl;
    swap(&a, &b);
    cout << a << " " << b << endl;

    return 0;
}