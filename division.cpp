#include<iostream>
using namespace std;
class box
{
    double l,w,h;
    public:
    void setdata(double a,double b,double c)
    {
        l=a;
        w=b;
        h=c;
    }
    double getdata()
    {
        return l * w * h;
    }
    box operator / (box &n)
    {
        box t;
        t.l = l / n.l;
        t.w = w / n.w;
        t.h = h / n.h;
        return t;
    }
};
int main()

{
    box a,b,c;
    a.setdata(3,6,9);
    cout<<"box a volume is:"<<a.getdata()<<endl;
    b.setdata(2,2,2);
    cout<<"box b volume is:"<<b.getdata()<<endl;
    c = a / b;
    cout<<"box c volume is:"<<c.getdata()<<endl;
}