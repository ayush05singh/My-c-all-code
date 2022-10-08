#include <iostream>
using namespace std;
int main()
{
    int n, remainder;
    cout << "Enter the value of 'n' =\t";
    cin >> n;

    while (n > 0)
    {
        remainder = n % 10;
        n = n / 10;
        cout << " The unit didgit of are  ="
             << " " << remainder << endl;
    }
}