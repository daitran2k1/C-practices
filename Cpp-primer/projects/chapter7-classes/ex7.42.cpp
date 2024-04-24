#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::string;

class Employee
{
    public:
        Employee(const string &n, unsigned yoe, double s):
            name(n), years_of_experience(yoe), salary(s) {}
        Employee(): Employee("", 0, 0.0) {}
        Employee(const string &n): Employee(n, 0, 0.0) {}
        Employee(const string &n, unsigned yoe): Employee(n, yoe, 0.0) {}


    private:
        string name;
        unsigned years_of_experience = 2;
        double salary = 1600.0;
};

int main()
{
    return 0;
}