#include<iostream>
using namespace std;

class DB;

class DM
{
    private:float m,cm;
    public:
        void get1()
        {
            cout<<" Enter distance in metre and cm \n";
            cin>>m>>cm;
        }
        void put1()
        {
            cout<<" Distance in metres="<<m<<" & cm="<<cm<<endl;
        }
    friend void add(DM x,DB z);
};

class DB
{
    private:float f,i;
    public:

        void get2()
    {
        cout<<" Enter distance in feet and inches \n";
            cin>>f>>i;
    }

    void put2()
    {
            cout<<" Distance in feet="<<f<<" & inches="<<i<<endl;
    }

    friend void add(DM x,DB z);
};

    void add(DM x,DB z)
    {   float metre,centi;

        metre=x.m+(z.f)*0.304;
        centi=x.cm+(z.i)*2.54;
        cout<<" The added distance is "<<metre<<" metres and "<<centi<<" centimetres."<<endl;
    }

int main()
{   DB b1;
    DM m1;

    m1.get1();
    m1.put1();

    b1.get2();
    b1.put2();

    add(m1,b1);
}
