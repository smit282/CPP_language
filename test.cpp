#include<iostream>
using namespace std;
class TEST
{
    int testcode;
    char description[30];
    int nocandidate,center;
    float callcenter()
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
        center=callcenter();
    }
    void disptest()
    {
        cout<<"testcode:"<<testcode<<endl;
        cout<<"description:"<<description<<endl;
        cout<<"nocandidate:"<<nocandidate<<endl;
        cout<<"center:"<<center<<endl;
    }
};
int main()
{
    TEST s;
    s.schedule();
    s.disptest();
}