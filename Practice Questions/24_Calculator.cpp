#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter 1st number: ";
    cin >> a;

    cout << "Enter 2nd number: ";
    cin >> b;

    char op;
    cout << "Enter the operator: ";
    cin >> op;

    int output;

    switch (op)
    {
        case '+':
            output = a + b;
            break;
        case '-':
            output = a - b;
            break;
        case '*':
            output = a * b;
            break;
        case '/':
            output = a / b;
            break;
        case '%':
            output = a % b;
            break;
        default:
            cout << "Enter a valid operator from +, -, *, /, %" << endl;
            exit(0);
    }

    cout << "Your result is: " << output << endl;
}