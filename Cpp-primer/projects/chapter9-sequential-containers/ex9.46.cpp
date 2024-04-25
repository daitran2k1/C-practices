#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string &format(string &name, const string &prefix, const string &suffix)
{
    name.insert(0, prefix);
    name.insert(name.size(), suffix);

    return name;
}

int main()
{
    string name("Dai");
    name = format(name, "Mr. ", " Jr.");

    cout << name << endl;

    return 0;
}