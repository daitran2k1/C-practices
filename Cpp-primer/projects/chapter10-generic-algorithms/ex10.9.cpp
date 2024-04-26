#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::sort;
using std::unique;

void elimDups(vector<string> &svec)
{
    sort(svec.begin(), svec.end());
    cout << "After sort():" << endl;
    for (auto &s : svec)
        cout << s << " ";
    cout << endl;

    auto end_unique = unique(svec.begin(), svec.end());
    cout << "After unique():" << endl;
    for (auto &s : svec)
        cout << s << " ";
    cout << endl;

    svec.erase(end_unique, svec.end());
    cout << "After erase():" << endl;
    for (auto &s : svec)
        cout << s << " ";
    cout << endl;
}

int main()
{
    vector<string> svec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    cout << "Initialization: " << endl;
    for (auto &s : svec)
        cout << s << " ";
    cout << endl;

    elimDups(svec);

    return 0;
}