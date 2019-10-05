//CLASS TEMPLATE
#include<iostream>
using namespace std;

template <typename T> //use another template U
class Weight{
	private:
		T kg;
		//U grams;
	public:
		void setData (T x) //U y
		{
			kg = x;
			//grams = y;
		}
		T getData()
		{
			return kg;
		}
		//T getgramData() { return grams;}
};

int main()
{
	Weight <int>obj1;
	obj1.setData(5);
	cout<<"Value : "<<obj1.getData()<<endl;
	
	Weight <double>obj2;
	obj2.setData(5.55);
	cout<<"Value : "<<obj2.getData()<<endl;
	
	return 0;
}