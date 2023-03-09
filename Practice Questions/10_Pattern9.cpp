// Printing pattern like
// A A A
// B B B
// C C C

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
            cout << (char)('A' + i) << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}