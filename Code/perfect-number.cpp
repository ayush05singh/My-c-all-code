#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter the value of n =\t";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    cout << "Sum of "
         << " " << n << " "
         << "="
         << " " << sum << endl;
    cout << endl;

    cout << "Double of"
         << " " << n << " "
         << "="
         << " " << 2 * n << "\n";

    cout << endl;

    if (2 * n == sum)
        cout
            << n << " "
            << "is a perfect number.";
    else
        cout << n << " "
             << "is not a perfect number.";
}