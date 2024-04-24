#include <iostream>
#include <list>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::list;
using std::vector;
using std::string;

int main()
{
    list<char *> lst{"Hello", ", ", "World", "!\n"};
    vector<string> svec;

    svec.assign(lst.begin(), lst.end());
    for (auto s : svec)
        cout << s;

    return 0;
}