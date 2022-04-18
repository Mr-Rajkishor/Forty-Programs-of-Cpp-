/*                             Program:- 8
     Write a C++ program to interchange the value of two variables without using third 
     variable.
                                                                                         */
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the two number : ";
	cin>>a>>b;
	cout<<"______Before interchange the value_______"<<endl;
	cout<<"\ta= "<<a<<"\tb= "<<b<<endl;
	 a=a+b;
	 b=a-b;
	 a=a-b;
	cout<<"______After interchange the value_______"<<endl;
	cout<<"\ta= "<<a<<"\tb= "<<b<<endl;

}