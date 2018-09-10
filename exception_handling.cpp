#include<iostream>
#include<string.h>
using namespace std;

class info
{
	private:int age,flag;
	double sal;
	char wheel,mycity[10];

	public:info()
	{	age=0;
		sal=0;
		wheel='\0';
		mycity[0]='\0';
	}

	void get()
	{
		try{
			cout<<"\nEnter your age\n";
			cin>>age;

			if(age<18 || age>55)
			{
				throw(age);
			}

			cout<<"\nEnter your salary\n";
			cin>>sal;

			if(sal<50000 || sal>100000)
			{
				throw(sal);
			}

			char city[4][10]={"mum","pune","chen","delhi"};   //we can assign values in {} only during initialization.
			cout<<"\nEnter your city \n";
			cout<<"\nEnter mum for mumbai  or pune or chen for chennai or delhi \n";
			cin>>mycity;

			for(int i=0;i<4;i++)
			{
				flag=0;
				int j=strcmp(city[i],mycity);   //returns 0 if strings are equal.
				if(j==0)
				{
					flag=1;
					break;
				}
				else
				{	flag=0;

				}

			}
				if(flag==1)
				{cout<<"\nCity found\n";}

				if(flag==0)
				{throw(mycity);}

			cout<<"\nDo you have 4 wheeler? (y/n)\n";
			cin>>wheel;
			if(wheel=='Y'||wheel=='y')
			{
				cout<<"\nYou have 4 wheeler\n";
			}
			else if(wheel=='N'||wheel=='n')
			{
				cout<<"\nYou do not have a 4 wheeler\n";
			}
			else
			{
					throw("\nInvalid input for vehicle\n");

			}

		}
			catch(int x)
			{
				cout<<"\nAge is invalid :"<<x;
			}
			catch(double x)
			{
				cout<<"\nSalary is invalid :"<<x;
			}
			catch(char y[])
			{
				cout<<"\nInvaid city:"<<y;
			}
			catch(char const* x)
			{
				cout<<x;
			}
		}

};

int main()
{   cout<<"\n*****EXCEPTION HANDLING*****\n";
	info i1;
	i1.get();
}
