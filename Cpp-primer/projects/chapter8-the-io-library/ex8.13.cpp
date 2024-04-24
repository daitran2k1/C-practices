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
using std::ostringstream;

struct PersonInfo
{
    string name;
    vector<string> phones;
};

int main()
{
    ifstream ifs("ex8.13.txt");
    string line, word;
    vector<PersonInfo> people;
    istringstream record;

    while (getline(ifs, line))
    {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        
        people.push_back(info);
    }

    for (const auto &person : people)
    {
        ostringstream formatted;
        
        for (const auto &nums : person.phones)
            formatted << " " << nums;

        cout << person.name << "'s numbers:" << formatted.str() << endl;
    }
}