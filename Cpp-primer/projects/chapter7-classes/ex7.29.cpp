#include <iostream>
#include <string>

using std::cout;
using std::ostream;
using std::string;

class Screen
{
    public:
        using pos = string::size_type;
        Screen() = default;
        Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') {}
        Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {}
        
        char get() const { return contents[cursor]; }
        inline char get(pos ht, pos wd) const;

        Screen move(pos r, pos c);

        Screen set(char);
        Screen set(pos, pos, char);

        Screen display(ostream &os) { do_display(os); return *this; }
        const Screen display(ostream &os) const { do_display(os); return *this; }

    private:
        pos cursor = 0, height = 0, width = 0;
        string contents;

        void do_display(ostream &os) const { os << contents; }
};

char Screen::get(pos r, pos c) const
{
    return contents[r * width + c];
}

inline Screen Screen::move(pos r, pos c)
{
    cursor = r * width + c;

    return *this;
}

inline Screen Screen::set(char c)
{
    contents[cursor] = c;
    
    return *this;
}

inline Screen Screen::set(pos r, pos col, char ch)
{
    contents[r * width + col] = ch;

    return *this;
}

int main()
{
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    return 0;
}