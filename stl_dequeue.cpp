#include<iostream>
#include<deque>
using namespace std;

void showlist(deque<int>queue);
int main()
{
    deque<int>queue;
    int ch,item;
    char z;

    do
    {
        cout<<"\n*****DEQUEUE OPERATIONS BY STL*****\n";
        cout<<"\nEnter";
        cout<<"\n1.For insert from front";
        cout<<"\n2.For insert from rear";
        cout<<"\n3.For delete from front";
        cout<<"\n4.For delete from rear";
        cout<<"\n5.For displaying whole Queque :"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1: cout<<"\nEnter the value to be inserted :";
                    cin>>item;
                    queue.push_front(item);
            break;

            case 2: cout<<"\nEnter the value to be inserted :";
                    cin>>item;
                    queue.push_back(item);
            break;

            case 3: item=queue.front();
                    cout<<"\nDeleted element is :"<<item;
                    queue.pop_front();
            break;

            case 4: item=queue.back();
                    cout<<"\nDeleted element is :"<<item;
                    queue.pop_back();
            break;

            case 5: showlist(queue);
            break;
            default:cout<<"\nSORRY.";
            break;

        }cout<<"\nEnter Y to continue else N :";
         cin>>z;
    }while(z=='y'||z=='Y');
}
void showlist(deque<int>queue)
{
    deque<int>::iterator i;
    cout<<"\nDisplaying elements of dequeue :";
    for(i=queue.begin();i!=queue.end();i++)  //begin() end()
    {
        cout<<*i<<" ";
    }

}
