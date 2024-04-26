#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;
using std::count;
using std::ifstream;

int main()
{
    list<string> slst;
    string s;
    ifstream ifs("ex10.2.txt");
    
    while (ifs >> s)
        slst.push_back(s);

    cout << "What value do you want to count?: ";
    cin >> s;
    cout << count(slst.begin(), slst.end(), s) << endl;

    return 0;
}