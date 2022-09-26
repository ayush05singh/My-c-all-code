#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "ENTER 'a' & 'b'"
         << endl;
    cin >> a >> b;
    {
        int c = a + b;
        if (a > 10)
        {
            cout << "Value of 'C'=\t"
                 << c << endl;
        }
        else
        {
            cout << "Enter Valid No.\n"
                 << endl;
        }
    }

    if (int d = a * b)
    {
        cout << "Value of 'D'=\t"
             << d << endl;
    }
    return 0;
}