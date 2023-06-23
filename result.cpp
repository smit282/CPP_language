#include<iostream>
using namespace std;
int main()
{
    int total,per,acc,stat,eco;
    cout<<"enter the acc marks:";
    cin>>acc;
    cout<<"enter the stat marks:";
    cin>>stat;
    cout<<"enter the eco marks:";
    cin>>eco;
    total=acc+stat+eco;
    per=total/3;
    cout<<"subjects total is:"<<total;
    cout<<"\nper is:"<<per;
    if(acc<33||stat<33||eco<33)
    {
        cout<<"\nfail....";
    }
    else if(per>=80)
    {
        cout<<"\nGarde:A";
    }
    else if(65<=per && per<80)
    {
        cout<<"\nGarde:B";
    }
    else if(45<=per && per<65)
    {
        cout<<"\nGarde:C";
    }
    else if(33<=per && per<45)
    {
        cout<<"\nGarde:D";
    }
}