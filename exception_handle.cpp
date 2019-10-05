#include<iostream>
using namespace std;
int main()
{
	int num,den,r esult;
	cout<<"Enter"<<endl;
	cin>>num>>den; //give num 5 and den 0. it causes an exception
	try
	{
		if(den == 0)
			throw den;
		result = num/den; //division(exception) happens here
	}
	catch(int ex)
	{
		cout<<"Divide by 0 not allowed -"<<ex;
	}
	
	cout<<"Result"<<result;
	
	return 0;
}