#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<string> svec{"1.3121", "2.641651", "3.3232", "4.487", "5.98049", "6.326", "7.1564", "8.659", "9.6565E-1"};

    double sum = 0;
    for (auto s : svec)
        sum += stod(s);

    cout << sum << endl;

    return 0;
}