#include <iostream>
using namespace std;
int main()
{
    int n, remain, rev = 0;
    cout << "Enetr the value of 'n' =\t";
    cin >> n;
    int temp = n;

    while (n > 0)
    {
        remain = n % 10;
        n = n / 10;
        rev = rev * 10 + remain;
    }
    cout << "Reverse of "
         << " " << temp << " "
         << "="
         << " " << rev;
}