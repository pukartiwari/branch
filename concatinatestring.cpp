#include<iostream>
//#include<string.h>
using namespace std;
class a
{
	private:
		string str;
		public:
	void getdata()
	{
		cout<<"enter the string:"<<endl;
		getline(cin,str);
	}
	a operator + (a obj)// returtype operator symbol (parameter
	{
		obj.str=str+obj.str;
		return obj;
	}
	void display()
	{
		cout<<"the concatinated string is:"<<str;
	}
};
int main()
{
	a first,second,sum;
	first.getdata();
	second.getdata();
	sum=first+second;
	sum.display();
	return 0;	
}
