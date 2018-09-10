#include<iostream>
using namespace std;

class time
{
    private:int h,m,s,am,as,t,r;
    public:void get()
    {
        cout<<"\n Enter time in hours,min,sec\n";
        cin>>h>>m>>s;
    }
    void put()
    {
     cout<<h<<":"<<m<<":"<<s<<endl;
    }

    void add(time t1,time t2)
    {
        h=t1.h+t2.h;
        m=t1.m+t2.m;
        s=t1.s+t2.s;

        if(s>=60)
        {   t=s/60;
            s=s%60;
            m=m+t;
        }

        if(m>=60)
        {   r=m/60;
            m=m%60;
            h=h+r;
        }

        cout<<"\n Time is "<<h<<":"<<m<<":"<<s<<"."<<endl;

    }
};

int main()
{
    time t1,t2,t3;
    t1.get();
    t2.get();
    t1.put();
    t2.put();

    t3.add(t1,t2);
}
