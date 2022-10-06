#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a no. =\t";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << "Factor  of "
                 << " " << n << " "
                 << "= " << i << endl;
    }
    return 0;
}