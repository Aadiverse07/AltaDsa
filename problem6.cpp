#include <iostream>
using namespace std;

int main()
{
    bool Active;
    cout<<" Enter the boolean value (0 or 1): ";
    cin >> Active;

    if (Active)
        cout << "Initial: true" << endl;
    else
        cout << "Initial: false" << endl;

    Active = !Active;

    if (Active)
        cout << "Toggled: true" << endl;
    else
        cout << "Toggled: false" << endl;

    return 0;
}