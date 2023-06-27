#include<iostream>
using namespace std;
class batsman
{
    int bcode,innings,notout,runs,batavg;
    char bname[20];
    void calcavg()
    {
        batavg=runs/(innings-notout);
    } 
    public:
    void readdata()
    {
        cout<<"Enter bcode :";
        cin>>bcode;
        cout<<"Enter Name:";
        cin>>bname;
        cout<<"Enter innings:";
        cin>>innings;
        cout<<"Enter notout:";
        cin>>notout;
        cout<<"Enter runs:";
        cin>>runs;
        calcavg();
    }
    void displaydata()
    {
        cout<<"bcode:"<<bcode<<endl;
        cout<<"bname:"<<bname<<endl;
        cout<<"innings:"<<innings<<endl;
        cout<<"notout:"<<notout<<endl;
        cout<<"runs:"<<runs<<endl;
        cout<<"batavg:"<<batavg<<endl;
    }
};
int main()
{
    batsman p;
    p.readdata();
    p.displaydata();
}
