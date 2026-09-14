#include <iostream>
using namespace std;

int main()
{
    int a, b, temporary;
    cout <<"Enter the initial value of a:-";
    cin >> a;
    cout <<"Enter the initial value of b:-";
    cin >>b; 

  cout << "Before swap: a = " << a << endl;
  cout << "Before swap: b = " << b << endl;

    temporary = a;
    a = b;
    b = temporary;

    cout << "After swap: a = " << a << endl;
    cout << "After swap: b = " << b << endl;

    return 0;
}