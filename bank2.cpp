#include<iostream>
using namespace std;
class bank 
{
    int acno,balance,amt;
    char name[30];
    public:
    void setdata()
    {
        cout << "Enter Account Number:" ;
        cin >> acno ;
        cout << "Enter Name:" ;
        cin >> name;
        cout << "Enter Balance:" ;
        cin >> balance;
    }
    void Showdata()
    {
        cout << "Account Number:" << acno << endl ;
        cout << "Name:" << name << endl ;
        cout << "Balance:" << balance << endl ;
    }
    void Deposit()
    {
        long amt;
        cout << "Enter Amount U Want To Deposit :" ;
        cin >> amt ;
        balance = balance + amt ;
    }
    void Withdrawal()
    {
        long amt;
        cout << "Enter Amount U Want To Withdraw :" ;
        cin >> amt ;
        if(balance>=amt)
        {
            balance = balance - amt;
        }
        else
        {
            cout << "less balance... :" ;
        }
        cout << "your balance is :" << balance << endl ;
    }
};
int main()
{
    bank x;
    int ch;
    do
    {
        cout << "\n1.setdat\n2.showdata\n3.Deposit\n4.Withdraw\n5.Exit" << endl ;
        cout << "\ninput your choise" ;
        cin >>ch ;
        switch(ch)
        {
            case 1:
            cout << "1.setdata\n" ;
            x.setdata();
            break;
            case 2:
            cout << "2.account details\n" ;
            x.setdata();
            break;
            case 3:
            cout << "3.deposite\n" ;
            x.setdata();
            break;
            case 4:
            cout << "4.withdraw\n" ;
            x.setdata();
            break;
            case 5:
            cout << "5.thank you...\n" ;
            cout << "5.visit again...\n" ;
            x.setdata();
            break;
            default:
            cout << "\nsorry wrong option" ;
            break;
        }
    }
    while (ch!=5);
}