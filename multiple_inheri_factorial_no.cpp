// multiple inheritance
#include<iostream>
using namespace std;
class base1
{
    protected:
    int m;
    public:
    void setm()
    {
        cout<<"enter m:";
        cin>>m;
    }
};
class base2
{
    protected:
    int n;
    public:
    void setn()
    {
        cout<<"enter n:";
        cin>>n;
    }
};
class derived : public base2,public base1
{
    int i,fact=1;
    public:
    void product()
    {
    for(i=1;i<=n;++i)
        {
            fact*=i;
            cout<<"square of num is"<<i<<":"<<fact<<endl;
        }
    }
};
int main()
{
    derived d;
    d.setm(); 
    d.setn();
    d.product();
}