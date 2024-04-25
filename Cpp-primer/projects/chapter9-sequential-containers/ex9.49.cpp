#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;

int main()
{
    ifstream ifs("ex9.49.txt");
    string ascender("bdfhklt");
    string descender("gjpqy");

    string word, best_word;
    int best_length = 0;

    while (ifs >> word)
    {
        if ((word.find_first_of(ascender) == string::npos) && (word.find_first_of(descender) == string::npos))
        {
            if (word.size() > best_length)
            {
                best_word = word;
                best_length = word.size();
            }
        }
    }

    cout << "\"" << best_word << "\" is the longest word that contains neither ascenders nor descenders, with a length of " << best_length << endl;

    return 0;
}