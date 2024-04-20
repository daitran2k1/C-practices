#include <iostream>

using std::cout;
using std::endl;

void swap(int **ppa, int **ppb)
{
    int *tmp = *ppa;
    *ppa = *ppb;
    *ppb = tmp;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    cout << pa << " " << pb << endl;
    swap(&pa, &pb);
    cout << pa << " " << pb << endl;

    return 0;
}