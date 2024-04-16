#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int ia[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

    using int_arr = int[4];

    for (int_arr &row : ia)
        for (int v : row)
            cout << v << endl;

    return 0;
}