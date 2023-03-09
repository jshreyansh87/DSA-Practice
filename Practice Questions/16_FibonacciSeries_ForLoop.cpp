#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of digits to print: ";
    cin >> n;

    int a = 0, b = 1;

    if (n <= 0)
    {
        cout << "Please enter a positive number" << endl;
        exit(0);
    }

    if (n >= 1)
    {
        cout << a << " ";
    }

    if (n >= 2)
    {
        cout << b << " ";
    }

    if (!(n > 2))
    {
        exit(0);
    }

    for (int i = 0; i < n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }
}