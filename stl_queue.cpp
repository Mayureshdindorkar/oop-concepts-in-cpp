#include<iostream>
#include<list>
using namespace std;
void showlist(list<int>q1);

int main()
{
    list<int>q1;
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
                    q1.push_back(item);
            break;

            case 2: if(q1.empty())
                    {
                        cout<<"\nQueue is empty.";
                    }
                    else
                    {
                        cout<<"\nDeleted element is :"<<q1.front();
                        q1.pop_front();
                    }
            break;

            case 3: if(q1.empty())
                    {
                        cout<<"\nQueue is empty.";
                    }
                    else
                    {
                        showlist(q1);
                    }
            break;

            default:cout<<"\nSORRY.";
            break;

        }cout<<"\nEnter Y to continue else N :";
         cin>>z;
    }while(z=='y'||z=='Y');
}
void showlist(list<int>q1)
{
        cout<<"\nDisplaying elements of queue :";
        list<int>::iterator it;
        for(it=q1.begin();it!=q1.end();it++) //begin() and end()
        {
            cout<<*it<<" ";
        }
}
