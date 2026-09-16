#include <iostream>
using namespace std;

int main() {

    int a, b, c, greatest;
    
    cout<<"Enter Value a: ";
     cin >> a ;

    cout<<"Enter Value b: ";
    cin >> b ;

    cout<<"Enter Value c: ";
    cin >> c ;

    if (a > b)
        {
        if (a > c) {
            greatest = a;
        } 
        else {
            greatest = c;
        }
        } 
    
    else {

        if (b > c)
        {
            greatest = b;
        } 
        else
        {
            greatest = c;
        }
    }

    cout << "The greatest number is: " << greatest << endl;

    return 0;
}