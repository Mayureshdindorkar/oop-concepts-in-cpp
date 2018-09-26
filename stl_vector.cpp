#include<iostream>
#include<vector>
using namespace std;

void showlist(vector<int>v1);
int main()
{
    vector<int>v1;
    vector<int>v2;
    int ch,item,n,i;
    char z;

    do
    {
        cout<<"\n*****VECTOR OPERATIONS BY STL*****\n";
        cout<<"\nEnter";
        cout<<"\n1.For insert the vector";
        cout<<"\n2.For delete the whole vector";
        cout<<"\n3.For displaying whole vector :";
        cout<<"\n4.For inserting the element at end of vector";
        cout<<"\n5.For delete last element of vector";
        cout<<"\n6.For swapping two vectors :"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1: cout<<"\nEnter the number of elements in the vector :";
                    cin>>n;
                    cout<<"\nEnter the values of the vector elements :\n";
                    for(i=0;i<n;i++)
                    {
                    cin>>item;
                    v1.push_back(item);
                    }
            break;

            case 2: v1.clear();
            break;

            case 3: showlist(v1);
            break;

            case 4: cout<<"\nEnter the element to be inserted at end of vector :";
                    cin>>item;
                    v1.push_back(item);
            break;

            case 5: cout<<"\nLast element deleted from vector is :"<<v1.back();
                    v1.pop_back();
            break;

            case 6: cout<<"\nEnter the number of elements in first the vector :";
                    cin>>n;
                    cout<<"\nEnter the values of the elements of first vector :\n";
                    for(i=0;i<n;i++)
                    {
                    cin>>item;
                    v1.push_back(item);
                    }

                    cout<<"\nEnter the number of elements in second the vector :";
                    cin>>n;
                    cout<<"\nEnter the values of the elements of second vector :\n";
                    for(i=0;i<n;i++)
                    {
                    cin>>item;
                    v2.push_back(item);
                    }
                    cout<<"\nBEFORE SWAPPING :\n";
                    cout<<"\nDisplaying first vector :";
                    showlist(v1);
                    cout<<"\nDisplaying second vector :";
                    showlist(v2);

                    v1.swap(v2);
                    cout<<"\nAFTER SWAPPING :\n";
                    cout<<"\nDisplaying first vector :";
                    showlist(v1);
                    cout<<"\nDisplaying second vector :";
                    showlist(v2);

            break;

            default:cout<<"\nSORRY.";
            break;

        }cout<<"\nEnter Y to continue else N :";
         cin>>z;
    }while(z=='y'||z=='Y');
}

void showlist(vector<int>v1)
{
    vector<int>::iterator i;
    cout<<"\nDisplaying elements of vector :";
    for(i=v1.begin();i!=v1.end();i++)  //begin() and end()
    {
        cout<<*i<<" ";
    }

}
