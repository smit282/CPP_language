#include<iostream>
using namespace std;
class report
{
    int adno,marks[3],tot=0,i;
    char name[20];
    float avg;
    float giv_avg()
    {
       avg=tot/3;
    }
    public:
    int readinfo()
    {
        cout<<"Enter addno:";
        cin>>adno;
        cout<<"Enter name:";
        cin>>name;
        for(i=0;i<3;i++)
        {
            switch(i)
            {
                case 0:
                cout<<"Enter English Marks:";
                break;
                case 1:
                cout<<"Enter Science Marks:";
                break;
                case 2:
                cout<<"Enter Maths Marks:";
                break;
            }
            cin>>marks[i];
            tot=tot+marks[i];
        }
        giv_avg();
    }
    int displayinfo()
    {
        cout<<"\n";
        cout<<"addmin no:"<<adno<<endl;
        cout<<"addmin name:"<<name<<endl;
        for(i=0;i<3;i++)
        {
            switch(i)
            {
                case 0:
                cout<<"English Marks:"<<marks[0]<<endl;
                break;
                case 1:
                cout<<"Science Marks:"<<marks[1]<<endl;
                break;
                case 2:
                cout<<"Maths Marks:"<<marks[2]<<endl;
                break;
            }
        }
        cout<<"total marks:"<<tot<<endl;
        cout<<"your average marks is:"<<avg;
    }
};
int main()
{
    report s;
    s.readinfo();
    s.displayinfo();
}