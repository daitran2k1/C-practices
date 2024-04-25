#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string &format(string &name, const string &prefix, const string &suffix)
{
    name.insert(name.begin(), prefix.begin(), prefix.end());
    name.append(suffix);

    return name;
}

int main()
{
    string name("Dai");
    name = format(name, "Mr. ", " Jr.");

    cout << name << endl;

    return 0;
}