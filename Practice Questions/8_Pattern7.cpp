// Prinitng pattern like
// 1
// 2 3
// 3 4 5
// 4 5 6 7

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
        int j = i;
        while (j <= 2 * i - 1)
        {
            cout << j << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}