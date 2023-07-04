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
    box operator++ (int)
    {
        box t;
        t.l = l++;
        t.w = w++;
        t.h = h++;
        return t;
    }
};
int main()
{
    box a,b;
    a.setdata(2,5,8);
    cout<<"box a volume is:"<<a.getdata()<<endl;
    a++;
    b=a;
    cout<<"box b volume is:"<<b.getdata()<<endl;
}