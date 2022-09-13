#include <iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age\t";
	cin>>age;
	cout<<endl;
	
	if(age<=18 ||100> age >=40)
	{
		cout<<"Your are eligible"<<endl;
	}
	else if(age>=100)
	{
		cout<<"SORRY OVER AGE"<<endl;
	}
	else
	{
		cout<<"SORRY ATTEMPT NEXT TYPE"<<endl;
	}
	return 0;
}