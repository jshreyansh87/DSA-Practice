// Printing pattern like
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j << " ";
            j++;
        }

        j = 1;
        while (j <= 2 * (i - 1))
        {
            cout << "* ";
            j++;
        }

        j = n - i + 1;
        while (j > 0)
        {
            cout << j << " ";
            j--;
        }

        cout << endl;
        i++;
    }
}