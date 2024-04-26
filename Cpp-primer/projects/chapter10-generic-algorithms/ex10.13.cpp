#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::partition;

bool is_equal_or_longer_than_5(const string &s1)
{
    return s1.size() >= 5;
}

int main()
{
    vector<string> svec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    cout << "Initialization: " << endl;
    for (auto &s : svec)
        cout << s << " ";
    cout << endl;

    auto end_partition = partition(svec.begin(), svec.end(), is_equal_or_longer_than_5);

    cout << "Elements that have five or more characters: " << endl;
    for (auto it = svec.cbegin(); it != end_partition; ++it)
        cout << *it << " ";

    return 0;
}