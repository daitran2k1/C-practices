#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

struct Person
{
    string name, address;

    string getName() const
    {
        return name;
    }

    string getAddress() const
    {
        return address;
    }
};

istream &read(istream &is, Person &p)
{
    is >> p.name >> p.address;
    
    return is;
}

ostream &print(ostream &os, const Person &p)
{
    os << p.name << ", in " << p.address;

    return os;
}

int main()
{
    Person p;

    read(cin, p);
    print(cout, p) << endl;

    return 0;
}