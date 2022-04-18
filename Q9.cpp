/*                                         Program:- 9
                       Write a C++ program to calculate simple interest.
                                                                                         */
#include<iostream>
using namespace std;
int main()
{
	float amt,rate,time,si;
	cout<<"Enter the amount: ";
	cin>>amt;
	cout<<"Enter the annual interest rate: ";
	cin>>rate;
	cout<<"Enter the time (in years): ";
	cin>>time;
    si=(amt*rate*time)/100;
	cout<<"simple interest: "<<si;
}