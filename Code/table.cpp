#include <iostream>
using namespace std;
int main()
{
    int a, b = 1;
    cout << "Table of\t";
    cin >> a;

    while (b <= 10)
    {
        ;
        cout << a << "\t"
             << "x"
             << "\t" << b << "\t" << a * b << endl;
        b++;
    }
    return 0;
}