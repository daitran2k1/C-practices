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
using std::stable_sort;
using std::stable_partition;
using std::for_each;

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

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

string make_plural(int cnt, const string &word, const string &suffix)
{
    return (cnt > 1) ? word + suffix : word;
}

void biggies(vector<string> &svec, vector<string>::size_type sz)
{
    elimDups(svec);
    stable_sort(svec.begin(), svec.end(), isShorter);
    cout << "After stable_sort(): " << endl;
    for (auto &s : svec)
        cout << s << " ";
    cout << endl;

    auto p = stable_partition(svec.begin(), svec.end(), [sz] (const string &s) { return s.size() < sz; });

    auto cnt = svec.end() - p;
    cout << cnt << " " << make_plural(cnt, "word", "s") << " of length " << sz << " or longer" << endl;

    for_each(p, svec.end(), [] (const string &s) { cout << s << " "; });
    cout << endl;
}

int main()
{
    vector<string> svec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    cout << "Initialization: " << endl;
    for (auto &s : svec)
        cout << s << " ";
    cout << endl;

    biggies(svec, 5);

    return 0;
}