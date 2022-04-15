#include<iostream>
#include<cmath>
using namespace std;
class X
{
	int a,b,c,d;
	public:
		void getdata1()
		{
			cout<<"enter the 2 values of varaible: ";
			cin>>a>>b;
			power(a,b);
		}
		void getdata2()
		{
			cout<<"enter the 3 values of varaible: ";
			cin>>a>>b>>c;
			power(a,b,c);
		}
		void power(int a,int b)
		{
			d=pow(a,b);
			cout<<"The exponential value is: "<<d;
		}
		void power(int a, int b, int c)
		{
			d=pow((a+b),c);
			
			cout<<"The The exponential value is: "<<d;
		}
		
};
int main()
{
	X obj1;
	int a,b;
	cout<<"Enter how many many variable you want:(2/3): ";
	cin>>a;
	if(a==2)
	{
		obj1.getdata1();
	}
	if(a==3)
	{
		obj1.getdata2();
	}
	
}
