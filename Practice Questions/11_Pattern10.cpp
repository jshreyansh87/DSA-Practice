// Printing pattern like
// A B C
// A B C
// A B C

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << (char)('A' + j) << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}