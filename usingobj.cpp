//POINTER TO OBJECT, PASSING OBJECT AS ARGUMENT AND RETURNING OBJECT
#include<iostream>
using namespace std;
//creating complex num class with real and img part
class ComplexNumber{
	private:
		int real;
		float imaginary;
		
	public:
		ComplexNumber(){
		}
		ComplexNumber(int r,float i){
			real = r;
			imaginary = i;
		}
		void displayData()
		{
			cout<<"Complex No is: "<<real<<"+"<<imaginary<<"i"<<endl<<endl;
		}
		int getRealPart()
		{
			return real;
		}
		float getImaginaryPart()
		{
			return imaginary;
		}
};

//we need to return a complex number so the return type is this
ComplexNumber add2number (ComplexNumber n1, ComplexNumber n2) //passing obj as args
{
	int r;
	float i;
	r = n1.getRealPart() + n2.getRealPart(); // cannot directly access real data as n1.real as it is private and this function is outside the class
	i = n1.getImaginaryPart() + n2.getImaginaryPart();
	
	ComplexNumber temp(r,i);
	
	return temp; //returning obj from func
}

//create 2 objects such that cmp1 = 5 + 3i,cmp2 = 3+5i,cmp3 is sum of cmp1 and cmp2
int main()
{
	ComplexNumber cmp1(5,3),cmp2(3,5),cmp3;
	cmp3 = add2number(cmp1,cmp2);
	cout<<"Result"<<endl;
	cmp3.displayData();
	
	cout<<"Using Pointer"<<endl;
	ComplexNumber *ptr;
	ptr = &cmp3; //Pointer to object
	ptr->displayData(); //can be used to point to the func of cmp3
	//same pointer to point to various/multiple objects of the same class
	cout<<"Other Pointer"<<endl;
	ptr = &cmp2;
	ptr->displayData();
	return 0;
}