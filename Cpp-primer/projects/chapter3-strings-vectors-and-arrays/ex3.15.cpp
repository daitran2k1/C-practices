#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> svec;
    string v;

    while (cin >> v)
        svec.push_back(v);

    for (string s : svec)
        cout << s << endl;

    return 0;
}