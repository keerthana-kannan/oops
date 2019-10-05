//FUNCTION TEMPLATE
#include<iostream>
using namespace std;

template<typename T>
T add(T x, T y)
{
	return x+y;
} 

//for sending 2 different parameters
/*
template<template T, template U>
U add (T x, U y)  //the return type can be as desired
{
	return x+y;
}
*/
/*
int main()
{
	cout<<"Addition : "<<add<int>(3,4);
	cout<<"Addition : "<<add<float>(3.4f,4.2f)<<endl;
	cout<<"Addition : "<<add<double>(3.35,4.66)<<endl;
	//for 2 different parameter : add<int,double>(3,4.5);
	return 0;
}