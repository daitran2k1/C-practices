#include <iostream>
#include <vector>
#include <string>
// #define NDEBUG

using std::cout;
using std::endl;
using std::vector;
using std::string;

void print(vector<string> &svec, int index)
{
    cout << svec[index] << endl;
    #ifndef NDEBUG
    cout << svec.size() << endl;
    #endif
    if (index != svec.size() - 1)
        print(svec, index + 1);
}

int main()
{
    vector<string> svec{"alo", "blo", "clo", "dlo"};
    print(svec, 0);

    return 0;
}