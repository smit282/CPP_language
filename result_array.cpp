#include<iostream>
using namespace std;
class result
{
    int total,acc,stat,eco;
    double per;
    public:
    void set()
    {
        cout<<"enter the acc marks:";
        cin>>acc;
        cout<<"enter the stat marks:";
        cin>>stat;
        cout<<"enter the eco marks:";
        cin>>eco;
        total=acc+stat+eco;
        per=total/3;
    }
    void cal()
    {
        total=acc+stat+eco;
        per=(double)total/3;
    }
    void display()
    {
        cout<<acc<<"\t"<<stat<<"\t"<<eco<<"\t"<<total<<"\t"<<per<<"\t";
    }   
};
int main()
{
    int i;
    result a[5];
    for(i=0;i<2;i++)
    {
        cout<<"no."<<i+1<<endl;
        a[i].set();
    }  
    for(i=0;i<2;i++)
    {
        a[i].cal();
    }  
    cout<<"acc\tstat\teco\ttotal\tper";
    for(i=0;i<2;i++)
    {
        cout<<"\n";
        a[i].display();
    }
}