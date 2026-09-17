#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year of which you want to know if it's an leap year or not :";
    cin>>year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout<<"The entered year "<< year << " Is a Leap year";
    }
    else{
        cout<<"The entered year " << year << " Is not a Leap year ";
    }
     return 0;
}