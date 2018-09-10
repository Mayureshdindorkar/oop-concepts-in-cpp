#include<iostream>
using namespace std;

class quadratic
{
    private:int a,b,c,ans;
            int g;

    public: void accept()
            {   cout<<" Enter coef. of x^2 , x , and constant "<<endl;
                cin>>a>>b>>c;

            };

            void display()
            {
                cout<<" The quadratic equation is "<<a<<"x^2+"<<b<<"x+"<<c<<endl;
            }
            quadratic operator+(quadratic q2 )
            {
                        quadratic temp;

                temp.a=q2.a+a;
                temp.b=q2.b+b;
                temp.c=q2.c+c;
                cout<<" The added quadratic equation is "<<temp.a<<"x^2+"<<temp.b<<"x+"<<temp.c<<endl;


                cout<<" Enter the value of x :"<<endl;
                cin>>g;
                ans=(temp.a*g*g)+(temp.b*g)+temp.c;
                cout<<" Answer is "<<ans<<endl;

            }

};

int main()
{   cout<<"\nQuadratic equation is :";
    quadratic q1,q2,q3;
    q1.accept();
    q2.accept();
    cout<<" Quadratic equations are as follows "<<endl;
    q1.display();
    q2.display();
    q3=q1+q2;


}
