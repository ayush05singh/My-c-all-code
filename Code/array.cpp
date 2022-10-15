#include <iostream>
using namespace std;
int main()
{
    int a[5] = {25, 12, 5, 63, 8};
    int i = 0;

    // for (i; i < 850; i++)
    // {
    //     cout << endl
    //          << a[i] << endl;
    // }

    //     for (int x : a)
    //     {
    //         cout
    //             << ++x << endl;
    //     }

    for (int m : a)
    {
        cout << --m << endl;
    }
}
