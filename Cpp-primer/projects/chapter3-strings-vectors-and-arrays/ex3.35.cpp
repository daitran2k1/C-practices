#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for (int *b = arr; b != arr + 10; ++b)
        *b = 0;

    for (auto v : arr)
        cout << v << endl;

    return 0;
}