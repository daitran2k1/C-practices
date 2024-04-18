#include <iostream>
#include <string>

using std::string;

int main()
{
    int i;
    double d;
    const string *ps;
    char *pc;
    void *pv;

    // pv = (void*) ps;
    pv = static_cast<void*>(const_cast<string*> (ps));
    // i = int(*pc);   // Segmentation fault?
    i = static_cast<int> (*pc);
    pv = &d;    // where is the cast?
    // pc = (char*) pv;
    pc = static_cast<char*> (pv);

    return 0;
}