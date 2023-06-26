#include<iostream>
using namespace std;
class test
{
    private:
    int Maths,Science, English, total;
    float per;
    public:
    int out()
    {
	cout<<"Maths\tScience\tEnglish\tTotal\tPer\n";
	cout<<Maths<<"\t"<<Science<<"\t"<<English<<"\t"<<total<<"\t"<<per<<"\t";
    }
    int calc()
    {
    total=Maths+Science+English;
    per=(float)total/3;
    
    }
    int setdata()
    {
    
    cout<<"enter the Maths marks:";
    cin>>Maths;
    cout<<"enter the Science marks:";
    cin>>Science;
    cout<<"enter the English marks:";
    cin>>English;

	
    }
};
int main()
{
    test z;
    z.setdata();
    z.calc();
    z.out();
}    