#include<iostream>
#include<stack>
#include<iterator>

using namespace std;

class binary {
private:
    stack<int>n1, n2, n3;

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
            n1.push(temp);
        }
      

        cout<<"\nEnter number of bits in second binary number :";
        cin>>n;
        cout<<"\nEnter individual bit of second binary number :";
        for (i=0;i<n;i++) {
            cin>>temp;
            n2.push(temp);
        }
       
    }

    void addition()
    {
        while(n1.size()!=0&&n2.size()!=0)
        {
            bit1 = n1.top();
            n1.pop();
            bit2 = n2.top();
            n2.pop();

            ans = (bit1 + bit2 + carry)%2;
            carry= (bit1 + bit2 + carry)/2;

            n3.push(ans);
        }
        while(n1.size()!=0)
        {
            bit1 = n1.top();
            n1.pop();

            ans = (bit1 + carry)%2;
            carry= (bit1 + carry)/2;

            n3.push(ans);

        }
        while(n2.size()!=0)
        {
            bit2 = n2.top();
            n2.pop();

            ans = (bit2 + carry)%2;
            carry=(bit2+carry)/2;

            n3.push(ans);
        }
     }

    void display()
     {
        cout << "\nAdded binary number is :";
        cout << carry << " ";

       while(!n3.empty())
       {
       		int temp;
       		temp=n3.top();
       		n3.pop();
       		cout<<temp<<" ";
       		
       }
       
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

