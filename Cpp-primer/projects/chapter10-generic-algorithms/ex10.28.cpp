#include <iostream>
#include <vector>
#include <deque>
#include <functional>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::deque;
using std::copy;
using std::inserter;
using std::back_inserter;
using std::front_inserter;

int main()
{
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    deque<int> dq1, dq2, dq3;
    
    copy(ivec.begin(), ivec.end(), back_inserter(dq1));
    cout << "Back inserter sequence:" << endl;
    for (auto i : dq1)
        cout << i << " ";
    cout << endl;

    copy(ivec.begin(), ivec.end(), front_inserter(dq2));
    cout << "Front inserter sequence:" << endl;
    for (auto i : dq2)
        cout << i << " ";
    cout << endl;

    copy(ivec.begin(), ivec.end(), inserter(dq3, dq3.begin()));
    cout << "Inserter to begin sequence:" << endl;
    for (auto i : dq3)
        cout << i << " ";
    cout << endl;

    return 0;
}