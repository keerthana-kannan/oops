//FUNCTION OVERRIDING
#include<iostream>
using namespace std;

class Animal{
	public:
		void sound()
		{
			cout<<"Animals sound"<<endl;
		}
};
class Dog : public Animal{
	public:
		void sound()
		{
			cout<<"Dogs bark"<<endl;
		}
};
class Cat : public Animal{
	public:
		void sound()
		{
			cout<<"Cats meow"<<endl;
		}
};

int main()
{
	Animal a1;
	a1.sound();
	Dog d1;
	d1.sound();
	Cat c1;
	c1.sound();
	return 0;
}