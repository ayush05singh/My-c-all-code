#include <iostream>
using namespace std;
int main()
{
    int A[10] = {2, 4, 15, 3, 4, 22, 11, 16, 3, 2};
    int sum = 0, n = 10, max, i = 0;
    max = A[0];

    // for (int i = 0; i < n; i++)
    // {
    //     sum = sum + A[i];
    // }
    // cout << sum;

    for (i; i < n; i++)
    {
        if (max < A[i])
            max = A[i];
    }
    cout << endl
         << max << endl;
}