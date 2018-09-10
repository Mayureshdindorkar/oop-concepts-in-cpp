#include<iostream>
using namespace std;

template<typename T>

class selection
{
	private: T a[50],s;

	public:
			selection()
	{
			s=0;
				for(int i=0;i<=50;i++)
				{	a[50]='\0';
				}

	}
			void get()
			{

				cout<<" Enter the size of array"<<endl;
				cin>>s;
				cout<<" Enter the elements of array"<<endl;
				for(int i=0;i<s;i++)
				{
					cin>>a[i];
				}

			}

			void sort()
			{		T temp;

					int min,i,j;

					for(i=0;i<s;i++)
					{	min=i;
						for(j=i+1;j<s;j++)
						{
							if(a[i]>a[j])
							{
								min=j;
							}

						}

						temp=a[i];
						a[i]=a[min];
						a[min]=temp;

					}


			}
			void display1()
			{
				cout<<" Entered array is :";
								for(int i=0;i<s;i++)
											{
												cout<<a[i]<<"\t";
											}

			}
			void display2()
						{
							cout<<" Sorted array is :";
											for(int i=0;i<s;i++)
														{
															cout<<a[i]<<"\t";
														}

						}

};
int main()
{
	selection<double>b1;
	b1.get();
	b1.display1();
	b1.sort();
	b1.display2();

}
