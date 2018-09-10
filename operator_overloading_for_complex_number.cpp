#include<iostream>
using namespace std;

class complex
{
    private:int r,i;

    public:
        complex()
        {
            i=r=0;

        }

         friend istream& operator>>(istream&in,complex&c)
        {
            cout<<" Enter the real and img part of complex number x+yi "<<endl;
            in>>c.r>>c.i;

        }

        friend ostream& operator<<(ostream&out,complex&c)
        {
            cout<<" The complex number is : ";
            out<<c.r<<"+"<<c.i<<"i"<<endl;

        }

        complex operator+(complex b)
        {
            complex temp;
            temp.r=r+b.r;
            temp.i=i+b.i;
            return temp;
        }

        complex operator-(complex b)
        {
            complex temp;
            temp.r=r-b.r;
            temp.i=i-b.i;
            return temp;
        }

        complex operator*(complex b)
        {
            complex temp;
            temp.r=r*(b.r);
            temp.i=i*(b.i);
            return temp;
        }

        complex operator/(complex b)
        {
            complex temp;
            temp.r=r/(b.r);
            temp.i=i/(b.i);
            return temp;
        }

         void display()
        {
            cout<<" The new complex number is "<<r<<"+"<<i<<"i."<<endl;
        }

};

int main()
{   int n;
    char z;
    complex a,b,c;

    do
    {   cout<<"\n*****COMPLEX NUMBER*****\n";
        cout<<" \nEnter : \n1.Insert two complex numbers. \n2.To display that two complex numbers. \n3.Add that complex numbers. \n4.Subtract that complex numbers. \n5.Do Multiplication. \n6.Do Division."<<endl;
        cin>>n;

        switch(n)
        {
            case 1:cin>>a;
                   cin>>b;
            break;

            case 2:cout<<a;
                   cout<<b;
            break;

            case 3: {c=a+b;  /*c=a.operator+(complex b); */
                     c.display();
                    }
                    break;

            case 4: {c=a-b;
                    c.display();}
                    break;

            case 5: {c=a*b;
                     c.display();}
                    break;

            case 6: {c=a/b;
                     c.display();
                    }
                    break;

            default:cout<<" Sorry wrong entry !!!! "<<endl;
            break;
        }

        cout<<" \nDo you want to do another operation? (Y/N) "<<endl;
        cin>>z;

    }while(z=='y'||z=='Y');


}
