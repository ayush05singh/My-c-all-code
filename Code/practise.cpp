#include <iostream>
using namespace std;
int main()
{
    int a, i = 1;
    cout << "Enter thr value of 'a'=\t";
    cin >> a;

    do
    {
        i = i * 2;
        cout << i << endl;
    } while (a > i);
}

// {
//     int a, b = 1;
//     cout << "Enter value of 'a'\t";
//     cin >> a;
//     //  cout << "a"
//     //      << "\t"
//     //      << "b" << endl;

//     while (a > b)
//     {
//         b = b * 2;
//         // b *= 2;
//         cout << b << endl;
//     }
//     return 0;
// }