#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter 'n'  =\t";
    cin >> n;

    do
    {
        cout << n << " "
             << "x"
             << " "
             << i << " "
             << "="
             << " " << n * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}
