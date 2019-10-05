//PURE VIRTUAL FUNC AND ABSTRACT CLASS
#include<iostream>
using namespace std;

class Shape{ // abstract class
	
	public:
		virtual void getArea() = 0; //pure virtual func
}; // cannot create obj for this class

class Circle:public Shape{
	public:
		void getArea()
		{
			int r = 5;
			cout<<"AREA : "<<(3.14*r*r);
		}
};

class Rectangle:public Shape{
	public:
		void getArea()
		{
			int l = 5;
			int b = 6;
			cout<<"AREA : "<<(l*b);
		}
};
int main()
{
	Circle c1;
	c1.getArea();
	Rectangle r1;
	r1.getArea();
	return 0;
}