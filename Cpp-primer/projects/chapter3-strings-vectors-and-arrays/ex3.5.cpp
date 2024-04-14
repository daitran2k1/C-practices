#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string concat, cur;

    // while (cin >> cur)
    //     concat += cur;

    while (cin >> cur)
        concat += cur + " ";

    cout << concat << endl;

    return 0;
}