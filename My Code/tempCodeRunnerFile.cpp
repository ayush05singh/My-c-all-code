#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter Day No."<<endl;
    cin>>day;

    switch(day)
    {
        case 1: cout<<"Monday"
        case 2: cout<<"Tuesday"
        case 3: cout<<"Wednesday"
        case 4: cout<<"Thursday"
        case 5: cout<<"Friday"
        case 6: cout<<"Saturday"
        case 7: cout<<"Sunday"
        default: cout<<"Error"
        
    }
    return 0;
}