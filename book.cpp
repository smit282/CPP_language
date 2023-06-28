#include<iostream>
using namespace std;
class book
{
    int book_no;
    char booktitle[20];
    float price;
    int total_cost(int n)
    {
        return(price*n);
    } 
    public:
    void purchase()
    {
        int n,tp;
        float gst,gst_p;
        cout<<"number of book purchase:";
        cin>>n;
        tp=total_cost(n);
        gst=(float)tp*0.12;
        gst_p=tp+gst;
        cout<<"your total cost with gst(12%) is:"<<gst_p;
    }
    void input()
    {
        cout<<"Enter bookno:";
        cin>>book_no;
        cout<<"Enter booktitle:";
        cin>>booktitle;
        cout<<"Enter price:";
        cin>>price;
        purchase();
    }
};
int main()
{
    book b;
    b.input();
}