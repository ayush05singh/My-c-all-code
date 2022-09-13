#include<iostream>
using namespace std;
int main()
{
	float time;
	cout<<"enter your time\t";
	cin>>time;
	
	if (time>=9&& time<=18)
	{
		cout<<"Congrats u'r on time"<<endl;
	}
	else
	{
		cout<<"Sorry u'r late"<<endl;
	
	}
	
	return 0;
}