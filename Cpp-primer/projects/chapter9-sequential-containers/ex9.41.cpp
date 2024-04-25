#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<char> cvec{'h', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!'};
    string s(cvec.begin(), cvec.end());
    cout << s << endl;

    return 0;
}