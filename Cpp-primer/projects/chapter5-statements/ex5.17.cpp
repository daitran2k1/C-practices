#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ivecA = {0, 1, 1, 2}, ivecB = {0, 1, 1, 2, 3, 5, 8};
    int flag = 1;

    for (auto ita = ivecA.cbegin(), itb = ivecB.cbegin(); ita != ivecA.cend() && itb != ivecB.cend(); ++ita, ++itb)
        if (*ita != *itb)
            flag = 0;

    if (flag)
    {
        cout << "True, ";
        if (ivecA.size() < ivecB.size())
            cout << "the first vector is a prefix of the second vector" << endl;
        else
            cout << "the second vector is a prefix of the first vector" << endl;
    }
    else
        cout << "False" << endl;

    return 0;
}