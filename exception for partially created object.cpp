#include<iostream>
using namespace std;

class test1
{
public:    test1()
    {
        cout<<"\nconstructing test 1";
    }
     ~test1()
    {
        cout<<"\ndestructing test 1";
    }
};
class test2
{public:
    test2()
    {
        cout<<"\nconstructing test 2";
        throw(10);
    }
     ~test2()
    {
        cout<<"\ndestructing test 2";
    }
};
int main()
{
    try
    {
        test1 t1;
        test2 t2;
        test1 t3;
    }
    catch(int x)
    {
        cout<<"\ncaught x="<<x;
    }
    cout<<"\nEnd of program.";
}
