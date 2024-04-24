#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> ref{1, 2, 3, 4, 5, 6, 7, 8, 9};

    // 1. direct initialization from vector
    vector<int> case1(ref);
    cout << "Case 1:" << endl;
    for (auto i : case1)
        cout << i << endl;

    // 2. copy initialization from vector
    vector<int> case2 = ref;
    cout << "Case 2:" << endl;
    for (auto i : case2)
        cout << i << endl;

    // 3. direct list initialization
    vector<int> case3{1, 2, 3};
    cout << "Case 3:" << endl;
    for (auto i : case3)
        cout << i << endl;

    // 4. copy list initialization
    vector<int> case4 = {1, 2, 3};
    cout << "Case 4:" << endl;
    for (auto i : case4)
        cout << i << endl;

    // 5. initialization with iterator range
    vector<int> case5(ref.begin()+2, ref.end()-2);
    cout << "Case 5:" << endl;
    for (auto i : case5)
        cout << i << endl;

    // 6. initialization with size argument
    vector<int> case6(9, -1);
    cout << "Case 6:" << endl;
    for (auto i : case6)
        cout << i << endl;

    return 0;
}