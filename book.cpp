#include<iostream>
using namespace std;
class book
{
    int bookno;
    char booktitle[20];
    float price,value;
    float n;
    float total_cost()
    {
        return(price*n);
    } 
    public:
    float input()
    {
        cout<<"Enter bookno:";
        cin>>bookno;
        cout<<"Enter booktitle:";
        cin>>booktitle;
        cout<<"Enter price:";
        cin>>price;
        cout<<"Enter n:";
        cin>>n;
        value=total_cost();
    }
    float purchase()
    {
        cout<<"enter book no:"<<bookno<<endl;
        cout<<"enter book title:"<<booktitle<<endl;
        cout<<"Enter price:"<<price<<endl;
        cout<<"value:"<<value<<endl;
    }
};
int main()
{
    book b;
    b.input();
    b.purchase();
}