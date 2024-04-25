#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<string> svec{"1", "2", "3", "4", "5", "6", "7", "8", "9"};

    int sum = 0;
    for (auto s : svec)
        sum += stoi(s);

    cout << sum << endl;

    return 0;
}