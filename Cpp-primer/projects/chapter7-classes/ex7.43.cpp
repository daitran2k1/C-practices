class NoDefault
{
    public:
        NoDefault(int v): val(v) {};

    private:
        int val = 0;
};

class C
{
    public:
        C(): nd(0) {};

    private:
        NoDefault nd;
};

int main()
{
    C c;
    return 0;
}