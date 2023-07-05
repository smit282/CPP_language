// friend function
#include<iostream>
using namespace std;
class box
{
    int l,w,h;
    friend box add(box,box);
    public:
    void setdata(int a,int b,int c)
    {
        l=a;
        w=b;
        h=c;
    }
    int getdata()
    {
        return l * w * h;
    }
};
box add(box x,box y)         //object as argument
{
    box t;
    t.l = x.l + y.l;
    t.w = x.w + y.w;
    t.h = x.h + y.h;
    return t;         //object as return
}
int main()
{
    box a,b,c;
    a.setdata(2,3,4);
    cout<<"box a volume is:"<<a.getdata()<<endl;
    b.setdata(9,8,7);
    cout<<"box b volume is:"<<b.getdata()<<endl;
    c = add(a,b);
    cout<<"box c volume is:"<<c.getdata()<<endl;
}