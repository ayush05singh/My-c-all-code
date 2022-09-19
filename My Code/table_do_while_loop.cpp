#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter 'n'\t";
    cin >> n;

    do
    {
        cout << n << "\t"
             << "x"
             << "\t"
             << i << "\t" << n * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}
