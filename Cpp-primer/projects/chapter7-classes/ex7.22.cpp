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
    friend istream &read(istream &, Person &);
    friend ostream &print(ostream &, const Person &);

    public:
        Person() = default;
        Person(const string &_name, const string &_address): name(_name), address(_address) {}

        string getName() const
        {
            return name;
        }

        string getAddress() const
        {
            return address;
        }
    
    private:
        string name, address;
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
    Person p1, p2("Dai Tran", "Vietnam");

    print(cout, p1) << endl;
    print(cout, p2) << endl;

    return 0;
}