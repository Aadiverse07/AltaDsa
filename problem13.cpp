#include <iostream>
using namespace std;

int main() {
    double a, b, result;
    char op;

    cin >> a >> b >> op;

    switch (op) {
        case '+':
            result = a + b;
            cout << a << " + " << b << " = " << result;
            break;

        case '-':
            result = a - b;
            cout << a << " - " << b << " = " << result;
            break;

        case '*':
            result = a * b;
            cout << a << " * " << b << " = " << result;
            break;

        case '/':
            if (b == 0) {
                cout << "Division by zero is not allowed";
            } else {
                result = a / b;
                cout << a << " / " << b << " = " << result;
            }
            break;

        case '%':
            if (b == 0) {
                cout << "Division by zero is not allowed";
            } else {
                cout << (int)a << " % " << (int)b << " = "
                     << (int)a % (int)b;
            }
            break;

        default:
            cout << "Invalid operator Enter a Valid operator";
    }

    return 0;
}