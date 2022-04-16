/*                                  Program:-5
     The distance between two cities (in km.) is input through the keyboard. Write a C++ 
     program to convert and print this distance in meters, feet, inches and centimetres.
                                                                                          */
#include<iostream>
using namespace std;
int main()
{
	float n,met,feet,inc,cm;
	cout<<"How many distance between two cities(in km ):-  ";
	cin>>n;
	met=n*1000;
	cm=n*1000*100;
	inc=n*1000*39.3700787;
	feet=n*1000*3.28084;
	cout<<"Meters= "<<met<<endl;
	cout<<"Inches= "<<inc<<endl;
	cout<<"Centimetres= "<<cm<<endl;
	cout<<"Feet = "<<feet<<endl;
}