#include <iostream>
using namespace std;
int main()
{
	int a,m,n,z;
	cout<<"Put value of'a'\t 'z'\t";
	cin>>a>>z;
	
	m=(--a)*(++z);
	
	cout<<m<<"\t"<<a<<"\t"<<z<< endl;
	
	n=(--a)*(z++);
	
	cout<<n<<"\t"<<a<<"\t"<<z<< endl;
	
	return 0;	
}