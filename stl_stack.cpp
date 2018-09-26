#include<iostream>
#include<list>
using namespace std;
void showlist(list<int>v1);

int main()
{
    list<int>stack;
    int ch,item;
    char z;

    do
    {
        cout<<"\n*****STACK OPERATIONS BY STL*****\n";
        cout<<"\nEnter";
        cout<<"\n1.For Push";
        cout<<"\n2.For Pop";
        cout<<"\n3.For displaying whole stack :"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1: if(stack.size()==5)
                    {
                        cout<<"\nStack is full.";
                    }
                    else
                    {
                        cout<<"\nEnter the value to be pushed :";
                        cin>>item;
                        stack.push_back(item);
                    }
            break;

            case 2: if(stack.size()==0)
                    {
                        cout<<"\nStack is empty.";
                    }
                    else
                    {
                        item=stack.back();
                        cout<<"\nPoped value is :"<<item;
                        stack.pop_back();
                    }
            break;

            case 3:if(stack.size()==0)
                    {
                        cout<<"\nStack is empty.";
                    }
                    else
                    {
                        showlist(stack);
                    }
            break;

            default:cout<<"\nSORRY.";
            break;

        }cout<<"\nEnter Y to continue else N :";
         cin>>z;
    }while(z=='y'||z=='Y');
}

void showlist(list<int>stack)
{
    list<int>::iterator i;

    i=stack.end();  //IMPORTANT STACK MUST BE DISPLAYED FROM LAST TO FIRST ELEMENT
    cout<<"\nDisplaying elements of stack :";  //DISPLAY OF STACK IS DIFFERENT
    do
    {
        i--;
        cout<<*i<<" ";
    }while(i!=stack.begin());
}
