#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the 2 no.   =\t";
    cin >> a >> b;

    while (a != b)
    {
        if (a > b)
            a = a - b;
        else if (b > a)
            b = b - a;
    }
    cout << " G.C.D of both no. is"
         << " " << a << endl;
}