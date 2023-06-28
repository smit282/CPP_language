#include<iostream>
using namespace std;
class batsman
{
    int bcode,innings,notout,runs;
    float batavg;
    char bname[20];
    float calavg()
    {
        return runs/(innings-notout);
    } 
    public:
    void readdata()
    {
        cout<<"Enter number :";
        cin>>bcode;
        cout<<"Enter Name:";
        cin>>bname;
        cout<<"Enter innings:";
        cin>>innings;
        cout<<"Enter notout:";
        cin>>notout;
        cout<<"Enter runs:";
        cin>>runs;
        batavg=calavg();
    }
    void displaydata()
    {
        cout<<"number:"<<bcode<<endl;
        cout<<"name:"<<bname<<endl;
        cout<<"innings:"<<innings<<endl;
        cout<<"notout:"<<notout<<endl;
        cout<<"inning runs:"<<runs<<endl;
        cout<<"batavg:"<<batavg<<endl;
    }
};
int main()
{
    batsman p;
    p.readdata();
    p.displaydata();
}
