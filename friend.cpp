//FRIEND FUNCTION
#include<iostream>
using namespace std;

class Distance{
	
	private:
		int meters;
	public:
		Distance()
		{
			meters = 0;
		}
		void displayData()
		{
			cout<<"Value: "<<meters<<endl<<endl;
		}
		friend void addValue(Distance &d); //passing object of the same class as arg
};

void addValue(Distance &d)
{
	d.meters = d.meters+5;
}

int main()
{
	Distance d1;
	d1.displayData();
	
	addValue(d1);
	d1.displayData();
	return 0;
}