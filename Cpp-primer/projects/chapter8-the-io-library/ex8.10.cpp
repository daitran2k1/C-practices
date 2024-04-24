#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;
using std::istringstream;

int main()
{
    ifstream ifs("ex8.4.txt");
    vector<string> svec;

    string line;
    while (getline(ifs, line))
        svec.push_back(line);

    for (auto &s : svec)
        cout << s << endl;

    for (auto &s : svec)
    {
        istringstream iss(s);
        string word;
        while (iss >> word)
            cout << word << endl;
    }
}