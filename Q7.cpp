/*                         program:- 7;
Write a c++ program to interchange the value of two variables using third variable
                                                                                                    */
#include<iostream>
using namespace std;
int main()
{
	int a,b,t;
        cout<<"Enter two number a and b:- ";
	cin>>a>>b;
	cout<<"_______after interchange number________"<<endl<<"\t\ta="<<a<<"\tb="<<b;
	t=a;
	a=b;
	b=t;
	cout<<"\n_______before interchange number_______"<<endl<<"\t\ta="<<a<<"\tb="<<b;
	return 0;
}
