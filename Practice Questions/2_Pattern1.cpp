// Printing a square of *'s

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows and columns: ";
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}