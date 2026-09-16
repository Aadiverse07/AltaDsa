#include <iostream>
using namespace std;
int main()
{
    int N;
    cout <<" Enter any number : ";
    cin >> N;
    if ( N % 3 == 0 && N % 5 == 0 )
    {
        cout << " The Number You entered is divisible by both 3 and 5" << endl;
    }
    else if ( N % 3 ==0 && N % 5 != 0 )
    {
        cout << " The Number You have entereed is only divisible by 3" << endl;
    }
    else if (N % 5 == 0 && N % 3 != 0)
    {
        cout << " The Number You have entereed is only divisible by 5" << endl;
    }
    else
    {
        cout << " The Number You have entereed is not divisible by both 3 and 5" << endl;
    }
}