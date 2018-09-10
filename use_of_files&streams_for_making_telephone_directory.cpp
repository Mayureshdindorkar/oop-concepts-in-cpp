#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class telephone
{
	private:long long int phn;
            	char name[20];
	public: void get()
		{
                cout<<"\nEnter the name and phone no. of person :";
		        cin>>name>>phn;
		}
		void display()
		{
			cout<<"\nName :"<<name<<" & Phone no :"<<phn<<endl;
			cout<<"\n***************************************\n";
		}

        int searchno(long long int pnum)
        {
            if(phn==pnum)
            {   cout<<"\nRecord found!!!!";
                cout<<"\nName :"<<name<<" & Phone no :"<<phn<<endl;
                return 1;
            }
            else
            {
                return 0;
            }
        }

        int searchname(char c[])
        {
            if(!strcmp(name,c))  //returns 0 when founds the match.
            {
                cout<<"\nRecord found!!!!";
                cout<<"\nName :"<<name<<" & Phone no :"<<phn<<endl;
                return 1;
            }
            else
            {
                    return 0;
            }
        }

};
int main()
{
    char z,name[30];
    long long int num;
    int a=1,ch;
    telephone t;
    fstream file;

    do
    {
    cout<<"\n******TELEPHONE******\n";
    cout<<"Enter \n1.To create contactlist.\n2.To display contactlist. \n3.Search contact by name. \n4.Search contact by phone no. \n5.To update contact :"<<endl;
	cin>>ch;
    int flag=0;
	switch(ch)
	{
        case 1: file.open("number.txt",ios::out);

                while(a==1)
                {
                         t.get();
                         file.write((char*)&t,sizeof(t));
                         cout<<"\n Do you want to create another contact?(1/0)";
                         cin>>a;
                }
                file.close();

        break;

        case 2: file.open("number.txt",ios::in);
                while(!file.eof())
                {
                    file.read((char*)&t,sizeof(t));
                    t.display();

                }
                file.close();
        break;

        case 3: file.open("number.txt",ios::in);
                cout<<"\nEnter name of person you want to search:";
                cin>>name;
                while(file)
                {
                    file.read((char*)&t,sizeof(t));

                    if(t.searchname(name)==1)
                    {   flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    cout<<"\nRecord not found!!!!";
                }
                file.close();
        break;
        case 4: file.open("number.txt",ios::in);
                cout<<"\nEnter phone number of person you want to search:";
                cin>>num;
                while(file)
                {
                    file.read((char*)&t,sizeof(t));

                    if(t.searchno(num)==1)
                    {   flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    cout<<"\nRecord not found!!!!";
                }
                file.close();
                break;

        case 5: file.open("number.txt",ios::in|ios::out);
                cout<<"\nEnter name of person you want to update contact:";
                cin>>name;
                while(file)
                {
                    file.read((char*)&t,sizeof(t));

                    if(t.searchname(name)==1)
                    {   flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    cout<<"\nRecord not found!!!!";
                }

                file.seekp(-sizeof(t),ios::cur); //IMPORTANT

                //Doing updation
                cout<<"\nEnter info for updation :";
                t.get();
                file.write((char*)&t,sizeof(t));
                file.close();
        break;
        default:cout<<"SORRY";
        break;
	}cout<<"\nEnter Y to do another operation on telephone directory else N :";
	 cin>>z;

    }while(z=='Y'||z=='y');
}
