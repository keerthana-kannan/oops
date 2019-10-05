//OPERATOR OVERLOADING

#include<iostream>
using namespace std;

class Complex{
	private:
		int real,imag;
	public:
	Complex(int r=0,int i=0)
	{
		real = r;
		imag = i;
	}
	void print()
	{
		cout<<real<<" + "<<imag<<"i"<<endl;
	}
	
	//operator overloading
	Complex operator +(Complex c)
	{
		Complex temp;
		temp.real = real + c.real; //c1.real + c2.real
		temp.imag = imag + c.imag;
		return temp;
	}
};
int main()
{
	Complex c1(5,4); //userdefined boj of class
	Complex c2(1,2);
	Complex c3;
	Complex c4(1,1);
	Complex c5;
	c3 = c1 + c2; //c1.add(c2)
	c3.print();
	c5 = c4+c1+c2; // can add any number. it  will dp c2 +c1 first then with c4
	c5.print();
	return 0;
}