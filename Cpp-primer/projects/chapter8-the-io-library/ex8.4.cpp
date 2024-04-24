#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::ifstream;
using std::vector;
using std::string;

void read(ifstream &ifs, vector<string> &svec)
{
    string line;

    while (getline(ifs, line))
        svec.push_back(line);
}

int main()
{
    vector<string> svec;

    ifstream ifs("ex8.4.txt");

    read(ifs, svec);

    for (auto &s : svec)
        cout << s << endl;

    return 0;
}