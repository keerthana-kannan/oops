//UNARY OPERATOR OVERLOADING

#include<iostream>
using namespace std;

class Weight{
	private:
		int kg;
	public:
		Weight(){
			kg =0;
		}
		Weight(int x) {
			kg = x;
		}
		
		void print(){
			cout<<"Weight in kg : "<<kg<<endl;
		}
		/*
		void operator ++()
		{
			++kg; // this is for basic functionality
		}
		*/
		/*
		void operator ++(int) //sending parameter just to differentiate between post and pre increment
		{
			kg++;
		}
		Weight operator ++()
		{
			Weight temp;
			temp.kg = ++kg;
			return temp;
		}
};


int main()
{
	Weight obj,obj1,obj2;
	obj.print();
	++obj;
	obj.print(); 
	obj++; //obj.operator ++()
	obj.print();
	obj2 = ++ obj1;
	obj2.print();
	return 0;
}