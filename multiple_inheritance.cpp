#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

class personal
{	private:string name,address;
            char gender;
            int DOB;
	public:void getper()
		{
			cout<<"Enter name of person :"<<endl;
			while(getchar()!='\n');
			getline(cin,name);
			cout<<"Enter his/her address :"<<endl;
			getline(cin,address);

			cout<<"Enter his/her gender (M/F):"<<endl;
			cin>>gender;

		}

	void putper()
	{   cout<<"\nPERSONAL RECORD\n";
        cout<<"*****************************************";
		cout<<"\n Name of person is : "<<name<<endl;
		cout<<"\n Address of person is : "<<address<<endl;
		cout<<"\n Gender of person is : "<<gender<<endl;

	}

};

class prof
{
	private:int yre;
		string quali;
		long long int sal;

	public:void getprof()
		{

			cout<<"Enter years of experience of person :"<<endl;
			cin>>yre;
			cout<<"Enter his/her quaification :"<<endl;
			while(getchar()!='\n');
			getline(cin,quali);
			cout<<"Enter his/her salary :"<<endl;
			cin>>sal;

		}
	void putprof()
	{   cout<<"\nPROFESIONAL RECORD\n";
        cout<<"*****************************************";
		cout<<"\n Years of experience of of person is : "<<yre<<endl;
		cout<<"\n Qualification of person is : "<<quali<<endl;
		cout<<"\n Salary of person is : "<<sal<<endl;

	}
};

class academic
{
private:int per;
	string lan,uni;

public:void getacad()
		{

			cout<<"Enter last year percentage of person :"<<endl;
			cin>>per;
			cout<<"Enter languages he/she knows :"<<endl;
			while(getchar()!='\n');
			getline(cin,lan);
			cout<<"Enter university in whch he/she studied :"<<endl;
			getline(cin,uni);

		}

		void putacad()
		{   cout<<"\nACADEMIC RECORD\n";
            cout<<"*****************************************";
			cout<<"\n Last year percentage of person : "<<per<<endl;
			cout<<"\n Languages he/she knows : "<<lan<<endl;
			cout<<"\n University in whch he/she studied : "<<uni<<endl;

		}

};
class biodata:public personal,public prof,public academic
{

    private:int height,weight;
	long long int mob;
    public:void getbio()
		{
			getper();
			getprof();
			getacad();

			cout<<"Enter height of person (in cm):"<<endl;
			cin>>height;
			cout<<"Enter weight of person (in kg):"<<endl;
			cin>>weight;
			cout<<"Enter mobile number of person :"<<endl;
			cin>>mob;

		}
	void putbio()
		{   cout<<"\nBIODATA\n";
			putper();
			putprof();
			putacad();
            cout<<"*****************************************";
            cout<<"\n Height of person : "<<height<<endl;
			cout<<"\n Weight of person : "<<weight<<endl;
			cout<<"\n Mobile number of person : "<<mob<<endl;

		}

};

int main()
{
	personal p;
	prof q;
	academic a;
	biodata b;
	int ch;
	char z;

	do
    {   cout<<"\n*****EMPLOYEE BIODATA*****\n";
        cout<<" Enter : \n1.To fill Personal record. \n2.To fill Professional record. \n3.To fill Academic record. \n4.To fill whole Biodata. ";
        cin>>ch;
	switch(ch)
	{	case 1:	p.getper();
                p.putper();
                break;
		case 2:	q.getprof();
                q.putprof();
                break;
        case 3:	a.getacad();
                a.putacad();
                break;
		case 4:	b.getbio();
                b.putbio();
                break;

		default:cout<<" SOMETGHING IS WRONG!!!!";
                break;

	 }cout<<"\n Press 'Y' to continue else 'N' ";
	 cin>>z;

    }while(z=='y'||z=='Y');

}
