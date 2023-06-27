#include<iostream>
using namespace std;
class student
{
    int admno;
    char sname[20];
    float maths, sci, eng, total;
    float ctotal()
    {
        return maths+sci+eng;
    }
    public:
    void takedata()
    {
        cout<<"Enter Admin No:";
        cin>>admno;
        cout<<"Enter Name:";
        cin>>sname;
        cout<<"Enter Maths Marks:";
        cin>>maths;
        cout<<"Enter Science Marks:";
        cin>>sci;
        cout<<"Enter English Marks:";
        cin>>eng;
        total= ctotal();
    }
    void showdata()
    {
        cout<<"Admin No:"<<admno<<endl;
        cout<<"Name:"<<sname<<endl;
        cout<<"Maths Marks:"<<maths<<endl;
        cout<<"Science Marks:"<<sci<<endl;
        cout<<"English Marks:"<<eng<<endl;
        cout<<"Total Marks:"<<total<<endl;
    }
};
int main()
{
    student s;
    s.takedata();
    s.showdata();
}