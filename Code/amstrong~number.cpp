#include <iostream>
using namespace std;
int main()
{
    int n, remainder, sum = 0;
    cout << "Enter the digit 'n' =\t";
    cin >> n;
    int m = n;
    while (n > 0)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }
    if (m == sum)
        cout << m << " "
             << "is amtrong number.";

    else
        cout << "Error! Try again.";
}