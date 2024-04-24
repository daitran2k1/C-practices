#include <iostream>
#include <sstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istringstream;
using std::string;

void read(istringstream &iss)
{
    string word;

    while (iss >> word)
        cout << word << endl;
}

int main()
{
    istringstream iss("a b c hello world");
    read(iss);

    return 0;
}