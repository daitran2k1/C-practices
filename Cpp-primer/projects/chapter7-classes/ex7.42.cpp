#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::string;

class Employee
{
    public:
        Employee(const string &fn, const string &ln, unsigned yoe, double s):
            first_name(fn), last_name(ln), years_of_experience(yoe), salary(s) {}
        Employee(): Employee("", "", 0, 0.0) {}
        Employee(const string &fn, const string &ln): Employee(fn, ln, 0, 0.0) {}
        Employee(const string &fn, const string &ln, unsigned yoe): Employee(fn, ln, yoe, 0.0) {}


    private:
        string first_name, last_name;
        unsigned years_of_experience = 0;
        double salary = 0.0;
};

int main()
{
    return 0;
}