#include <iostream>
using namespace std;
int main()
{
    int n, sum, i = 1, count = 0;
    cout << "Enter the value of n =\t";
    cin >> n;
    cout << endl;

    for (i; i <= n; i++)
    {

        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << n << " "
             << "is prime number.";
    }
    else
    {
        cout << n << " "
             << "is not prime number.";
    }
    cout << endl;
}