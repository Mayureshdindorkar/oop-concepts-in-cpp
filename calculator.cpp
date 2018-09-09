#include<iostream>
using namespace std;
char ch;

class calc
{	private:int a,b;
	public:

    void get()
	{	cout<<"\nEnter First number , Operator ,Second number :";
		cin>>a>>ch>>b;
	}

	void add()
	{
		cout<<"\nAddition="<<(a+b);

	}

	void sub()
	{
		cout<<"\nSubtraction="<<(a-b);

	}

	void mul()
	{
		cout<<"\nMultiplication is ="<<(a*b);

	}

	void div()
	{
		cout<<"\nDivision is ="<<(a/b);

	}

};
int main()
{	char a;
	calc q;

	do
	{	cout<<"\n*****CALCULATOR*****\n";
        q.get();

	switch(ch)

	{	case '+':q.add();
		break;


		case '-':q.sub();
		break;


        case '*':q.mul();
		break;

		case '/':q.div();
		break;

		default :cout<<"wrong";
		break;

	}


	  cout<<"\nDo you want to do another operation?(Y/N)\n";
      cin>>a;
	}while(a=='Y'||a=='y');

}
