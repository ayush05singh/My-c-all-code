#include <iostream>
using namespace std;
int main()
{
	int a,n,k,m,z;
	cout<<"Put value of'a'";
	cin>>a;
	

	z=a--;
	m=--a;
	
	cout<<z<<"\t"<<a<<endl;
	cout<<m<<"\t"<<a<<endl;
	
	
	n=a++;
	k=++a;
	
	cout<<n<<"\t"<<a<<endl;
	cout<<k<<"\t"<<a<<endl;

	
}