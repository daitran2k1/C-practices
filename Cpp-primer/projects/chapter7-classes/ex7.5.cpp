#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct Person
{
    string name, address;

    string getName() const { return name; }
    string getAddress() const { return address; }
};

int main()
{
    Person p;
    p.name = "Dai Tran";
    p.address = "Hanoi, Vietnam";

    cout << p.getName() << ", in " << p.getAddress() << endl;

    return 0;
}