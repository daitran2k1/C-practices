#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <functional>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::list;
using std::string;
using std::sort;
using std::unique_copy;
using std::back_inserter;

int main()
{
    vector<string> svec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    list<string> slst;

    sort(svec.begin(), svec.end());

    cout << "Sorted vector elements:" << endl;
    for (auto &s : svec)
        cout << s << " ";
    cout << endl;

    unique_copy(svec.begin(), svec.end(), back_inserter(slst));
    cout << "List elements:" << endl;
    for (auto &s : slst)
        cout << s << " ";
    cout << endl;

    return 0;
}