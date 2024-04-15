#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    int arrA[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, arrB[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int flag = 1;

    for (int i = 0; i < 10; i++)
        if (arrA[i] != arrB[i])
            flag = 0;

    if (flag)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;


    vector<int> vecA(10), vecB(10);
    flag = 1;

    for (auto ita = vecA.cbegin(), itb = vecB.cbegin(); ita != vecA.cend(), itb != vecB.cend(); ++ita, ++itb)
        if (*ita != * itb)
            flag = 0;

    if (flag)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;

    return 0;
}