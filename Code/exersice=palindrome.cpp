#include <iostream>
using namespace std;
int main()
{
    int n, r, rever = 0;
    cout << "Enter the input   =\t";
    cin >> n;
    int temp = n;
    cout << endl;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rever = rever * 10 + r;
    }
    if (temp == rever)
        cout << "It is palindrome.";
    else
        cout << "It is not palindrome";
}