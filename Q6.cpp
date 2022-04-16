/*                                          Program:- 6
            Write a C++ program to calculate the area and circumference of the circle.
                                                                                          */
#include<iostream>
using namespace std;
int main()
{
	float r,a,c;
	cout<<"Enter the radious:- ";
	cin>>r;
	a=3.14*r*r;
	c=2*3.14*r;
	cout<<"Area= "<<a<<endl;
	cout<<"Circumference= "<<c;
}	