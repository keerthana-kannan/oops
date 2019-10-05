//CLASS AND OBJECTS //CONSTRUCTORS AND DESTRUCTORS
#include <iostream>
#include <string>
using namespace std;

class Cars{
	private: //to prevent access by other classes/func
	string company_name; //use string instead of char as we have it in the string lib
	string model_name;
	float mileage; // each of this is a member variable or data member
	double price;
	
	//create a func to set the data and another func to display the data for the above given
	public: //this has to be public coz it has to be used to display data
		//these are member functions of a class that includes constructor and destructor
		
		Cars(){ 
			cout<<"Default"<<endl;
		//default constructor
			//company_name = "Toyota"; //giving it same for all the objects
		} //the program works without this also but will assume random values without defining it
		
		Cars(string cname, string mname,float m,double p) //parameterized constructors
		{
			cout<<"Parameterized"<<endl;
			company_name = cname;
			model_name = mname;
			mileage = m;
			price = p;
		}
		
		Cars(Cars &obj) //copy constructor
		{
			cout<<"Copy"<<endl;
			company_name = obj.company_name;
			model_name = obj.model_name;
			mileage = obj.mileage;
			price = obj.price;
		}
		
		void setData(string cname,string mname,float m,double p){
			company_name = cname;
			model_name = mname;
			mileage = m;
			price = p;
		}
		
		void displayData(){
			cout<<"Car Properties"<<endl<<endl;
			cout<<"Car Company Name - "<<company_name<<endl;
			cout<<"Car Company Model - "<<model_name<<endl;
			cout<<"Car Mileage - "<<mileage<<endl;
			cout<<"Car Price - "<<price<<endl;
		}
		
		//destructor not needed here coz not dynamically allocated but defined for understanding
		~Cars()
		{
			cout<<"Destructor"<<endl;
		}
};

int main()
{
	Cars car1,car2("Tata","Fortuner",20,350000);
	
	//Objects are just variables of type class
	//car1 calls default constructor so gives output only to company name and the rest are random values
	//car2 parameterized constructor
	car1.setData("Toyota","Altis",15.5,150000); //to print without constructor
	//so there are 2 ways to set data, directly using constructor and using func
	car1.displayData();
	car2.displayData();
	Cars car3 = car1; // copy constructor
	car3.displayData();
	return 0;
}