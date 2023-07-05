#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    void setdata( )
    {
        cout<<"Enter the value of a:";
        cin>>a;
        cout<<"Enter the value of b:";
        cin>>b;
    }
    friend void max(test s);
};
void max(test s)
{
    if(s.a > s.b)
    {
        cout<<"maximum value is a:"<<s.a;
    }
    else
    {
        cout<<"maximum value is b:"<<s.b;
    }
}
int main()
{
    test t;
    t.setdata();
    max(t);
}   