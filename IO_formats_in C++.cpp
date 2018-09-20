#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char name[80];
    cout<<100<<"\t"<<"hello India"<<"\t"<<-10<<endl;

    cout.unsetf(ios::dec);

    cout.setf(ios::hex|ios::showpos|ios::left|ios::showbase|ios::fixed|ios::showpoint|ios::uppercase);
    cout.precision(8);
    cout<<124.2135<<"\t"<<"hello India"<<"\t"<<-10<<"\t"<<10<<endl;

    cout.unsetf(ios::basefield|ios::showbase|ios::showpos|ios::fixed|ios::uppercase);
    cout<<124.21350000<<"\t"<<"hello India"<<"\t"<<-10<<"\t"<<10<<endl;

    cout.setf(ios::right);
    cout.width(10);
    cout.precision(4);
    cout.fill('#');
    cout<<1234<<endl;
    cin.setf(ios::skipws);
    cout<<"\nEnter your name :";
    cin>>name;
    cout<<name;
    cout.unsetf(ios::skipws);

    cout<<"\nManipulators"<<endl;
    cout.setf(ios::right);
    cout<<setw(10)<<fixed<<setprecision(4)<<12.2455544<<endl;
    cout<<"\nEnter your name :";
    cin>>skipws>>name;
    cout<<name;

    cout<<setiosflags(ios::showpos|ios::showbase|ios::showpoint)<<endl;
    cout<<12.2445445<<endl;

    cout<<setw(20)<<setfill('$')<<"manu"<<endl;

    cout<<scientific<<12.45565<<endl;


}

