#include <iostream>
#include <list>
#include <string>

using std::cout;
using std::endl;
using std::list;
using std::string;

void elimDups(list<string> &slst)
{
    slst.sort();
    cout << "After sort():" << endl;
    for (auto &s : slst)
        cout << s << " ";
    cout << endl;

    slst.unique();
    cout << "After unique():" << endl;
    for (auto &s : slst)
        cout << s << " ";
    cout << endl;
}

int main()
{
    list<string> slst{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    cout << "Initialization: " << endl;
    for (auto &s : slst)
        cout << s << " ";
    cout << endl;

    elimDups(slst);

    return 0;
}