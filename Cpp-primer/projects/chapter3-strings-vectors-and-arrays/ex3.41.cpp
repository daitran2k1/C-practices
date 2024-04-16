#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> ivec(arr, arr+10);
    
    for (int v : ivec)
        cout << v << endl;

    return 0;
}