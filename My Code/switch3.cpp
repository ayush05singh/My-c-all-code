#include <iostream>
using namespace std;
int main()
{
    int total;
    int discount = 0.0;
    cout << "Enter Total Amount\t";
    cin >> total;

    if (total >= 100 && total < 500)
        discount = (total)*10 / 100;
    else if (total >= 500)
        discount = (total)*20 / 100;

    cout << "Billed Amount =\t" << total << endl;
    cout << "Discount =\t" << discount << endl;
    cout << "Final Bill Amount =\t" << (total - discount) << endl;

    return 0;
}