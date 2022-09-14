#include <iostream>
using namespace std;
int main()
{
    cout << "Main" << endl;
    cout << "1. Add\n"
         << "2. Sub.\n"
         << "3. Multiply\n"
         << "4. Divide \n"
         << endl;

    int option;
    cout << "Enter the option\t";
    cin >> option;

    float a, b, c;
    cout << "Enter 'a'\t";
    cin >> a;
    cout << "Enter 'b'\t";
    cin >> b;

    switch (option)
    {
    case 1:
        c = a + b;
        break;

    case 2:
        c = a - b;
        break;

    case 3:
        c = a * b;
        break;

    case 4:
        c = a / b;
        break;

    default:
        "Invalid Option";
    }
    cout << "Result = " << c << endl;
    return 0;
}