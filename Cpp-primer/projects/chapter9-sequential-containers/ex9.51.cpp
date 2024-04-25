#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Date
{
    public:
        Date() = default;
        Date(const string &s);

        void print() { cout << "Day " << day << ", month " << month << ", year " << year << endl; }

    private:
        unsigned year = 2024;
        unsigned month = 4;
        unsigned day = 25;
};

Date::Date(const string &s)
{
    int contain_slash = 0;
    if (s.find('/') != string::npos)
        contain_slash = 1;
    
    if (contain_slash)
    {
        size_t pos = 0;
        day = stoi(s, &pos);
        ++pos;

        string month_year = s.substr(pos);
        month = stoi(month_year, &pos);
        ++pos;

        string year_ = month_year.substr(pos);
        year = stoi(year_, &pos);
    }
    else
    {
        if ((s.find("January") != string::npos) || (s.find("Jan") != string::npos))
            month = 1;
        else if ((s.find("February") != string::npos) || (s.find("Feb") != string::npos))
            month = 2;
        else if ((s.find("March") != string::npos) || (s.find("Mar") != string::npos))
            month = 3;
        else if ((s.find("April") != string::npos) || (s.find("Apr") != string::npos))
            month = 4;
        else if (s.find("May") != string::npos)
            month = 5;
        else if ((s.find("June") != string::npos) || (s.find("Jun") != string::npos))
            month = 6;
        else if ((s.find("July") != string::npos) || (s.find("Jul") != string::npos))
            month = 7;
        else if ((s.find("August") != string::npos) || (s.find("Aug") != string::npos))
            month = 8;
        else if ((s.find("September") != string::npos) || (s.find("Sep") != string::npos))
            month = 9;
        else if ((s.find("October") != string::npos) || (s.find("Oct") != string::npos))
            month = 10;
        else if ((s.find("November") != string::npos) || (s.find("Nov") != string::npos))
            month = 11;
        else if ((s.find("December") != string::npos) || (s.find("Dec") != string::npos))
            month = 12;

        size_t pos = s.find_first_of("0123456789");
        string day_year = s.substr(pos);
        day = stoi(day_year, &pos);
        pos += 2;

        string year_ = day_year.substr(pos);
        year = stoi(year_, &pos);
    }
}

int main()
{
    Date d1, d2("January 1, 1900"), d3("1/1/1900"), d4("Jan 1, 1900");
    d1.print();
    d2.print();
    d3.print();
    d4.print();

    return 0;
}