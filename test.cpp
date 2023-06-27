#include<iostream>
using namespace std;
class TEST
{
    int testcode;
    string description;
    int nocandidate;
    int calcntr()
    {
        return(nocandidate/100+1);
    }
    public:
    void schedule()
    {
        cout<<"Enter testcode:";
        cin>>testcode;
        cout<<"Enter description:";
        cin>>description;
        cout<<"Enter nocandidate:";
        cin>>nocandidate;
        calcntr();
    }
    void disptest()
    {
        cout<<"testcode:"<<testcode<<endl;
        cout<<"description:"<<description<<endl;
        cout<<"nocandidate:"<<nocandidate<<endl;
        cout<<"number of calcntr:"<<calcntr()<<endl;
    }
};
int main()
{
    TEST s;
    s.schedule();
    s.disptest();
}