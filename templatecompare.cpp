#include<iostream>
using namespace std;
template<typename T>
T compare(T i,T j)
{	if(i>j)
	{return i;}

	else{return j;}

}

int main()
{

	cout<<" Greater integer is  "<<compare<int>(10,12);

	cout<<" Greater float is  "<<compare<float>(10.24,12.25);

	cout<<" Greater double is  "<<compare<double>(10.45213,12.2564415);

}
