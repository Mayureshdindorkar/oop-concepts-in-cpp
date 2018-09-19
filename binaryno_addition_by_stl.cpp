#include<iostream>
#include<list>
#include<iterator>

using namespace std;

class binary {
private:
    list<int>n1, n2, n3;

public:
    int i ;
    int bit1 ;
    int bit2;
    int n ;
    int temp;
    int ans;
    int carry;

    void get() {
        carry=0;
        cout << "\nEnter number of bits in first binary number :";
        cin>>n;
        cout << "\nEnter individual bit of first binary number :";
        for (i = 0; i < n; i++) {
            cin>>temp;
            n1.push_back(temp);
        }
        cout<<"\nDisplaying first element :";
        list<int>::iterator it;
        it=n1.end();
        do
        {   it--;
            cout<<*it<<" ";

        }while(it!=n1.begin());


        cout<<"\nEnter number of bits in second binary number :";
        cin>>n;
        cout<<"\nEnter individual bit of second binary number :";
        for (i=0;i<n;i++) {
            cin>>temp;
            n2.push_back(temp);
        }
        cout<<"\nDisplaying second no:";
        it=n2.end();
        do
        {   it--;
            cout<<*it<<" ";

        }while(it!=n2.begin());
    }

    void addition()
    {
        while(n1.size()!=0&&n2.size()!=0)
        {
            bit1 = n1.back();
            n1.pop_back();
            bit2 = n2.back();
            n2.pop_back();

            ans = (bit1 + bit2 + carry)%2;
            carry= (bit1 + bit2 + carry)/2;

            n3.push_back(ans);
        }
        while(n1.size()!=0)
        {
            bit1 = n1.back();
            n1.pop_back();

            ans = (bit1 + carry)%2;
            carry= (bit1 + carry)/2;

            n3.push_back(ans);

        }
        while(n2.size()!=0)
        {
            bit2 = n2.back();
            n2.pop_back();

            ans = (bit2 + carry)%2;
            carry=(bit2+carry)/2;

            n3.push_back(ans);
        }
     }

    void display()
     {
        cout << "\nAdded binary number is :";
        cout << carry << " ";

        list<int>::iterator it;
        it=n3.end();
        do
        {   it--;
            cout<<*it<<" ";

        }while(it!=n3.begin());
    }
};

int main()
{
    binary b1;
    char z;
    do {
        cout << "\n*****ADDITION OF BINARY NUMBERS BY STACK(LIST STD)*****\n";
        int ch;
        cout << "nEnter \n1.To enter two binary numbers \n2.To add that binary numbers and display their addition :";
        cin>>ch;

        switch (ch) {
            case 1:b1.get();
            break;

            case 2:b1.addition();
                   b1.display();
            break;

            default:cout << "nYou have entered wrong choice.";
                break;
        }
        cout << "\nEnter y to continue else n :";
        cin>>z;

    } while (z == 'Y' || z == 'y');

}

