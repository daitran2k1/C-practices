#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::string;

istream &read(istream &is)
{
    string word;

    while (is >> word)
        cout << word << endl;

    is.clear();

    return is;
}

int main()
{
    istream &is = read(cin);
    cout << is.good() << endl;

    return 0;
}