#include<iostream>
using namespace std;
class ABC
{
    protected:
    int n;
	public:
	void setN()
	{
		cout<<"enter n:";
        cin>>n;
	}
};
class PQR : public ABC
{ 
    protected:
};
class XYZ : public PQR
{
    int i;
	public:
	int cube()
	{
		for(i=1; i<=n; i++)
		{
			cout<< "cube of" <<i<< "is" << " = " <<(i*i*i)<<endl;
		}
	} 
};
int main()
{
	XYZ x;
	x.setN();
	x.cube();
}