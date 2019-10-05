#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char arr[100];
	cout<<"Enter name and age";
	cin.getline(arr,100); //to get an entire line
	
	ofstream myfile("xyz.txt"); //this is analogous to int(oftsream) x(myfile)
	//every time data is added,instead of overwriting, append can be done by using the below statement
	//ofstream myfile("xyz.txt",ios::app);
	myfile.open("xyz.txt"); // or use an if condition to check if its open.. if(myfile.is_open())
	myfile<< arr; //write arr to myfile
	myfile.close();
	cout<<"Write Successful"<<endl<<endl;
	
	cout<<"Reading..."<<endl;
	char arr1[100];
	ifstream obj("xyz.txt");
	obj.getline(arr1,100);
	cout<<"arr content"<<arr1<<endl<<endl;
	cout<<"Read Completed"<<endl;
	obj.close();
	
	return 0;
}