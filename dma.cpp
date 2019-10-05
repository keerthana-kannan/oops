#include<iostream>
using namespace std;
int main()
{
	int size;
	int *ptr;
	cout<<"Size ="<<endl;
	cin>>size;
	ptr = new int[size]; //operator "new", type of array,size of array
	cout<<"Enter values"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	cout<<"Display"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<endl;
	}
	return 0;
}