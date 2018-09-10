#include<iostream>
using namespace std;

class student
{
        private:char name[20];
		char div;
		int roll,marks;

	public:student()
            {
                name[0]='\0';
                div='\0';
                roll=0;
                marks=0;
            }
	    void get()
		{
			cout<<" \nEnter the name of student "<<endl;
			cin>>this->name;
			cout<<" Enter the division of student "<<endl;
			cin>>this->div;
			cout<<" Enter the roll no of student "<<endl;
			cin>>this->roll;
			cout<<" Enter the marks of student "<<endl;
			cin>>this->marks;

		}

		void display()
		{	cout<<" \nName of student is "<<this->name<<endl;
			cout<<" Division of student is "<<this->div<<endl;
			cout<<" Roll no. of student is "<<this->roll<<endl;
			cout<<" Marks of student is "<<this->marks<<endl;
		}

		int giverol()
		{
			return roll;        //this function returns the roll number of student.

		}
};

int main()
{
    cout<<"\n*****STUDENTS DATABASE*****";
    int ch,nr,upr,i=0,total;
    char a;
    cout<<"\nEnter total number of students:";
    cin>>total;
    student s[total];       //array of objects.
	do
   {cout<<"\n*****STUDENTS DATABASE*****\n";
	cout<<" \nEnter : \n1.To add new record \n2.Display all records \n3.Search record by roll no. \n4.Update record "<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:	if(i<total)
                {
                s[i].get();
                s[i].display();
                cout<<"----------------------------------------------------------------------\n";
				i++;
                }
                else
                {
                    cout<<"\nSORRY SPACE FULL";
                }

		       break;

		case 2:for(i=0;i<total;i++)
				s[i].display();
				cout<<"-----------------------------------------------------------------------\n";

			break;

		case 3:cout<<" \nEnter the roll number of student you want to search "<<endl;
               cin>>nr;
				for(i=0;i<total;i++)
				{if(nr==s[i].giverol())
					{
						s[i].display();
					}
				}

			break;

		case 4:cout<<" \nEnter the roll number of student you want to update "<<endl;
				cin>>upr;
				for(i=0;i<total;i++)
				{if(upr==s[i].giverol())
					{
						s[i].get();
						s[i].display();
					}
				}
			break;

		default:cout<<" Operation is cancelled !"<<endl;
			break;

	}cout<<"Do you want to do another operation?(Y/N)";
      cin>>a;
	}while(a=='Y'||a=='y');

}
