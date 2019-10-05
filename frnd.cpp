//FRIEND CLASS
#include<iostream>
using namespace std;

class class1
{
	friend class class2;
	private:
		int x;
	public:	
		class1(int a)
		{
			x =a;
		}
};

class class2{
	public:
		void showData(class1 obj)
		{
			cout<<" X : "<<obj.x<<endl;
		}
	
};

int main()
{
	class1 obj1(5);
	class2 obj2;
	obj2.showData(obj1);
	return 0;
}