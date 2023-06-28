#include<iostream>
using namespace std;
class fuel
{
    int fno;
    string destination;
    float distance,fuel;
    int calfuel()
    {
        if(distance<=1000)
            fuel=500;
        else if(distance>1000 && distance<=2000)
            fuel=1100;
        else
            fuel=2200;        
    }
    public:
    void feedinfo()
    {
        cout<<"Enter flight number:";
        cin>>fno;
        cout<<"Enter destination:";
        cin>>destination;
        cout<<"Enter distance:";
        cin>>distance;
        calfuel();
    }
    void showinfo()
    {
        cout<<"flight number is:"<<fno<<endl;
        cout<<"destination:"<<destination<<endl;
        cout<<"distance:"<<distance<<endl;
        cout<<"fuel:"<<fuel<<endl;
    }
};
int main()
{
    fuel f;
    f.feedinfo();
    f.showinfo();
}