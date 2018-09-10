#include<iostream>
using namespace std;

template<class T>

class vector
{	private:T a,b,c,sc;

	public:void get()
		{
			cout<<"\nEnter the vector :"<<endl;
			cin>>a>>b>>c;
		}

		void display()
		{
			cout<<"\nEntered vector is :"<<endl;
			cout<<a<<"i+"<<b<<"j+"<<c<<"k"<<endl;
		}

		void mul()
		{	cout<<" \n Enter the value of scalar :"<<endl;
			cin>>sc;

			a=sc*a;
			b=sc*b;
			c=sc*c;

				cout<<" \nNew vector is :\n";
				cout<<a<<"i+"<<b<<"j+"<<c<<"k"<<endl;

		}

		void add(vector z2)
		{
			vector temp;
			temp.a=a+z2.a;
			temp.b=b+z2.b;
			temp.c=c+z2.c;

                cout<<"\n New vector is :\n";
				cout<<temp.a<<"i+"<<temp.b<<"j+"<<temp.c<<"k"<<endl;

		}
};

int main()
{   int n;
	char h,i;
	do
    {

	cout<<"\n*****VECTOR*****\n";
	cout<<"\nEnter: \n1.For Integer vector. \n2.For float vector. \n3.For Double vector.\n";
	cin>>n;

	if(n==1)
    {	vector<int>v1;
        vector<int>v2;

		int ch;
        do
        {cout<<"\n*****INTEGER VECTOR*****\n";
		 cout<<"\nEnter : \n1.Only Insert & Display vector. \n2.Multiply vector by scalar. \n3.To Add two vectors.\n"<<endl;
		 cin>>ch;

		switch(ch)
		{

			case 1:v1.get();
			       v1.display();
			break;

			case 2:v1.get();
			       v1.display();

                   v1.mul();

			break;

			case 3:v1.get();
			       v1.display();

			       v2.get();
			       v2.display();

                   v1.add(v2);

			break;

			default:cout<<" !!!!WRONG!!!!\n";

			break;

		}cout<<"\nEnter Y to continue else N:";
		 cin>>i;

        }while(i=='y'||i=='Y');
    }
	else if(n==2)
		{	vector<float>v1;
			vector<float>v2;

		int ch;
        do
        {
        cout<<"\n*****FLOAT VECTOR*****\n";
		cout<<"\nEnter 1.Only Insert & Display vector 2.Multiply vector by scalar 3.To Add two vectors\n"<<endl;
		cin>>ch;

		switch(ch)
		{

			case 1:v1.get();
			       v1.display();
			break;

			case 2:v1.get();
			       v1.display();

                   v1.mul();
			break;

			case 3:v1.get();
			       v1.display();

			       v2.get();
			       v2.display();

                   v1.add(v2);

			break;

			default:cout<<"\n !!!!WRONG!!!!\n";

			break;

		}cout<<"\nEnter Y to continue else N:";
		 cin>>i;

            }while(i=='Y'||i=='y');
		}

		else if(n==3)
		{	vector<double>v1;
			vector<double>v2;

			int ch;
        do
        {
        cout<<"\n*****DOUBLE VECTOR*****\n";
		cout<<"\nEnter 1.Only Insert & Display vector 2.Multiply vector by scalar 3.To Add two vectors\n"<<endl;
		cin>>ch;

		switch(ch)
		{

			case 1:v1.get();
			       v1.display();
			break;

			case 2:v1.get();
			       v1.display();

                   v1.mul();

			break;

			case 3:v1.get();
			       v1.display();

			       v2.get();
			       v2.display();


				   v1.add(v2);
			break;

			default:cout<<"\n !!!!WRONG!!!!\n";

			break;


		}cout<<"\nEnter Y to continue else N:";
		 cin>>i;



		}while(i=='Y'||i=='y');


        }

         cout<<"\nEnter Y to continue with another type of vector else N:";
		 cin>>h;

    }while(h=='y'||h=='Y');

}
