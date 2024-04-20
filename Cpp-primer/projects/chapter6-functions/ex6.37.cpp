#include <string>

using std::string;

using string_arr = string[10];

string (&func(const string *))[10];
// type alias
string_arr &func2(const string *);
// trailing return
auto func3(const string *) -> string(&)[10];
// decltype
string sarr[10];
decltype(sarr) &func4(const string *);

int main()
{
    return 0;
}