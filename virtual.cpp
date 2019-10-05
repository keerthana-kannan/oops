//VIRTUAL FUNCTION
#include <iostream>
using namespace std;

class Base{
	public:
	void show()
	{
		cout<<"Base show func Called"<<endl;
	}
	virtual void print()
	{
		cout<<"Base print func called"<<endl;
	}
};
class Derived : public Base{
	void show()
	{
		cout<<"Derived show func"<<endl;
	}
	void print()
	{
		cout<<"Derived print called"<<endl;
	}
};
int main()
{
	Derived d;
	Base *ptr;
	ptr = &d;
	ptr->show(); //base class func called
	ptr->print(); //derived class func called
	return 0;
}