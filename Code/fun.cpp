#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Put value of =\t";
    cin >> i;

    while (i >= 85)
    {
        cout << "Value of i  =\t" << i << endl;
        i--;
    }
    return 0;
}