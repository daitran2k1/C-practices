#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Account
{
    public:
        void calculate() { amount += amount * interestRate; }
        static double rate() { return interestRate; }
        static void rate(double);

    private:
        string owner;
        double amount;
        static double interestRate;
        static double initRate();
        static constexpr int period = 30;
        double daily_tbl[period];
};

void Account::rate(double newRate)
{
    interestRate = newRate;
}

double Account::initRate()
{
    return 0.01;
}

double Account::interestRate = initRate();

int main()
{
    double r;
    r = Account::rate();

    Account ac1;
    Account *ac2 = &ac1;
    r = ac1.rate();
    r = ac2->rate();

    cout << Account::rate() << endl;
    Account::rate(0.02);
    cout << Account::rate() << endl;

    return 0;
}