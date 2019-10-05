//MULTIPLE INHERITANCE
#include<iostream>
using namespace std;

class A{
	public:
		void print()
		{
			cout<<"Class A"<<endl;
		}
};
class B{
	public:
		void print()
		{
			cout<<"Class B"<<endl;
		}
};

class AB : public A, public B{
	public:
		void print()
		{
			A :: print(); //avoids the ambiguity error
			B :: print();
		}
};

int main()
{
	AB obj;
	obj.print(); //prints A print then B
	return 0;
}