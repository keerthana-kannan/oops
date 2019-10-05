//ACCESS SPECIFIERS IN INHERITANCE (PUBLIC,PRIVATE,PROTECTED)
#include<iostream>
using namespace std;

class myBaseClass{
		
		public:
			int x;
			myBaseClass()
			{
				x=5;
				y=5;
				z=5;
			}
			void printProtectedData()
			{
				cout<<"Y : "<<y<<endl;
			}
			void printPrivateData()
			{
				cout<<"Z : "<<z<<endl;
			}
		protected:
			int y;
		private:
			int z;
};
void myOutsideFunction(myBaseClass obj)
{
	cout<<"X : "<<obj.x<<endl; 
	//cout<<"Y: "<<obj.y<<endl; //only a member func can access the data member. SO this will give error
	obj.printProtectedData();
	//private also gives the same error as protected
	obj.printPrivateData();
}

/*
class myDerivedClass: public myBaseClass
{
	 //it has protected int y, public int x
	 
};
*/
/*
class myDerivedClass: protected myBaseClass
{
	 //it has protected int y, protected int x
	 
};
*/
/*
class myDerivedClass: private myBaseClass
{
	 //it has private int y, private int x
	 
};

class myDerivedClass2 : public myDerivedClass{
	
	//no data inherited in private mode. inherits only if the previous class is public
};
*/
int main()
{
	myBaseClass obj1;
	myDerivedClass obj2;
	
	cout<<"X : "<<obj2.x<<endl; //created error for private and protected derived class
	myOutsideFunction(obj1);
	return 0;
}