#include<iostream>
using namespace std;
class emp
{
	private:
		int id;
		int salary;
		char name[20];
	public:
		void getdata()
		{
			cout<<"enter the id of employee:"<<endl;
			cin>>id;
			fflush(stdin);
			cout<<"enter the name of employee:"<<endl;
			cin.get(name,20);
			fflush(stdin);
			cout<<"enter the salary of employee:"<<endl;
			cin>>salary;
			fflush(stdin);
		}
		void display()
		{
			cout<<"the employee with highest salary is:"<<endl;
			cout<<"name="<<name<<endl;
			cout<<"id="<<id<<endl;
			cout<<"salary="<<salary<<endl;	
		}
		friend void comparision(emp[]);
};
void comparision(emp W[])
{
	int j=0,k=0;
	emp temp;
	for(j=0;j<3;j++)
	{
		for(k=j+1;k<3;k++)
		{
			if(W[j].salary<W[k].salary)
			{
				temp=W[j];
				W[j]=W[k];
				W[k]=temp;
			}
		}
	}
	W[0].display();
}
int main()
{
	emp obj[3];
	int i=0;
	for(i=0;i<3;i++)
	{
		obj[i].getdata();
		
	}
	comparision(obj);
}
