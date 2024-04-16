#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> text{"Paragraph1", "", "Paragraph2", "", "Paragraph3"};
    
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
        for (char &c : *it)
            c = toupper(c);

    for (string s : text)
        cout << s << endl;

    return 0;
}