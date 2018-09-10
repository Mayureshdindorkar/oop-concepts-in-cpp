#include<iostream>
using namespace std;

class date
{
    private:int dd,mm,yy;
    public:date(){}
    date(int d,int m,int y)
    {
        dd=d;
        mm=m;
        yy=y;
    }
    date operator+(date D2)
    {   int a=0;
        date temp;
        temp.dd=dd+D2.dd;
        temp.mm=mm+D2.mm;
        temp.yy=yy+D2.yy;

        if(temp.dd>=30)
        {
            temp.dd=temp.dd-30;
            temp.mm=temp.mm+1;
        }
        if(temp.mm>=12)
        {   a=temp.mm/12;
            temp.mm=temp.mm%12;
            temp.yy=temp.yy+a;
        }

        return temp;
    }
    void display()
    {   cout<<"\nDATE :";
        cout<<dd<<":"<<mm<<":"<<yy<<".";
    }

};
int main()
{
    date d1(30,10,10),d2(5,5,1),d3;
    d1.display();
    d2.display();
    d3=d1+d2;
    d3.display();
}
