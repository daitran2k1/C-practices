#include <fstream>
#include <iterator>

using std::ifstream;
using std::ofstream;
using std::istream_iterator;
using std::ostream_iterator;

int main(int argc, char **argv)
{
    ifstream ifs(argv[1]);
    istream_iterator<int> in(ifs), end;
    ofstream ofs1(argv[2]), ofs2(argv[3]);
    ostream_iterator<int> out1(ofs1, " "), out2(ofs2, "\n");

    while (in != end)
    {
        int tmp = *in++;
        if (tmp % 2)
            out1 = tmp;
        else
            out2 = tmp;
    }

    return 0;
}