#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main()
{
    int choice;

    cout<<"\n*****STACK AND QUEUE BY STL*****\n";

    cout<<"\nEnter \n1.For Stack operations \n2.For queue operations :";
    cin>>choice;

    if(choice==1)
    {
    stack<int>s1;
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
            case 1: if(s1.size()==5)
                    {
                        cout<<"\nStack is full.";
                    }
                    else
                    {
                        cout<<"\nEnter the value to be pushed :";
                        cin>>item;
                        s1.push(item);
                    }
            break;

            case 2: if(s1.size()==0)
                    {
                        cout<<"\nStack is empty.";
                    }
                    else
                    {
                        item=s1.top();
                        cout<<"\nPoped value is :"<<item;
                        s1.pop();
                    }
            break;

            case 3:if(s1.size()==0)
                    {
                        cout<<"\nStack is empty.";
                    }
                    else
                    {
                    while(!s1.empty())
                    {
       				int temp;
       				temp=s1.top();
       				s1.pop();
       				cout<<temp<<" ";

                    }
                    }
            break;

            default:cout<<"\nSORRY.";
            break;

        }cout<<"\nEnter Y to continue else N :";
         cin>>z;
    }while(z=='y'||z=='Y');
    }
    else if(choice==2)
    {
    queue<int>q1;
    int ch,item;
    char z;

    do
    {
        cout<<"\n*****QUEUE OPERATIONS BY STL*****\n";
        cout<<"\nEnter";
        cout<<"\n1.For insert in queue(to rear)";
        cout<<"\n2.For delete from queue(from front)";
        cout<<"\n3.For displaying whole queue :"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1: cout<<"\nEnter the value to be inserted :";
                    cin>>item;
                    q1.push(item);
            break;

            case 2: if(q1.empty())
                    {
                        cout<<"\nQueue is empty.";
                    }
                    else
                    {
                        cout<<"\nDeleted element is :"<<q1.front();
                        q1.pop(); //deletes first element of queue
                    }
            break;

            case 3: if(q1.size()==0)
                    {
                        cout<<"\nQueue is empty.";
                    }
                    else
                    {
                    while(!q1.empty())
                    {
       				int temp;
       				temp=q1.front();
       				q1.pop(); //pops first element of the queue
       				cout<<temp<<" ";

                    }
                    }
            break;

            default:cout<<"\nSORRY.";
            break;

        }cout<<"\nEnter Y to continue else N :";
         cin>>z;
    }while(z=='y'||z=='Y');
    }

}
