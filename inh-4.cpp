#include <iostream>
using namespace std;
class Account
{

    string acc_no;

protected:
    float balance;

public:
    Account()
    {
        acc_no = "0";
        balance = 0.0;
    }
    Account(string a, float b)
    {
        acc_no = a;
        balance = b;
    }
    void displayaccount()
    {
        cout << "\n Account no. : " << acc_no << "\n Balance : " << balance;
    }
};
class SavingsAccount : public Account
{
    float interest_rate;

public:
    SavingsAccount()
    {
        interest_rate = 1;
    }
    SavingsAccount(string a, float b, float c) : Account(a, b)
    {
        interest_rate = c;
    }
    void calculate_interest()
    {
        float interest = balance * interest_rate / 100;
        cout << "\n Interest : " << interest;
    }
    void display()
    {
        displayaccount();
        cout << "\n Interest rate : " << interest_rate;
        cout << "\n Total balance after interest : " << balance + (balance * interest_rate / 100);
    }
};
int main()
{
    SavingsAccount sa1, sa2("12345", 1000.0, 3.5);
    sa1.display();
    sa1.calculate_interest();
    sa2.display();
    sa2.calculate_interest();
    return 0;
}
