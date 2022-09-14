#include <iostream>
using namespace std;
int main()
{
	float time;
	cout << "enter your time\t";
	cin >> time;

	if (time >= 9 && time <= 18)
	{
		cout << "Congrats u'r on time" << endl;
	}
	else if (time < 24 && time >= 0)
	{
		cout << "Sorry u'r late" << endl;
	}
	else
	{
		cout << "Invalid time" << endl;
	}

	return 0;
}