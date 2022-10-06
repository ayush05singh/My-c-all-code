#include <iostream>
using namespace std;
int main ()
{
	float a,b,c,d,e,z;
	cout<<"Enter 'a' & 'b' & 'c'";
	cin>>a>>b>>c>>z;
	
	d=(a*b)/(b+c);
	e= d*z;
	
	cout<<"YOUR RESULT"<<e;
}