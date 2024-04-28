#include <iostream>
#include <vector>
#include <string>
#include <functional>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::bind;
using std::find_if;
using namespace std::placeholders;

bool check_size(int val, const string &s)
{
    return val > s.size();
}

int main()
{
    vector<int> ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    string s = "hello";

    auto pos = find_if(ivec.begin(), ivec.end(), bind(check_size, _1, s));
    if (pos != ivec.end())
        cout << *pos << " is the first element that has a value greater than the length of \"" << s << "\"" << endl;
    else
        cout << "Not found" << endl;

    return 0;
}