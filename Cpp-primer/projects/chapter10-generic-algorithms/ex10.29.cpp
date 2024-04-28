#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>

using std::cout;
using std::ifstream;
using std::istream_iterator;
using std::ostream_iterator;
using std::vector;
using std::string;

int main()
{
    ifstream ifs("ex10.29.txt");
    istream_iterator<string> in(ifs), end;
    vector<string> svec(in, end);
    ostream_iterator<string> out(cout, "\n");

    for (auto &s : svec)
        out = s;

    return 0;
}