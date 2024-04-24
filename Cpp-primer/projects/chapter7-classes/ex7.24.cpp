#include <string>

using std::string;

class Screen
{
    public:
        using pos = string::size_type;
        Screen() = default;
        Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') {}
        Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {}
        
        char get() const { return contents[cursor];}

        inline char get(pos ht, pos wd) const;
        Screen &move(pos r, pos c);
    
    private:
        pos cursor = 0, height = 0, width = 0;
        string contents;
};

inline Screen &Screen::move(pos r, pos c)
{
    cursor = r * width + c;

    return *this;
}

char Screen::get(pos r, pos c) const
{
    return contents[r * width + c];
}

int main()
{
    return 0;
}