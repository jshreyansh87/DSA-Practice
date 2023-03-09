// Printing pattern like
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

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
        while (j <= n - i)
        {
            cout << "  ";
            j++;
        }

        while (j <= n)
        {
            cout << j - (n - i) << " ";
            j++;
        }

        j = 1;
        while (j < i)
        {
            cout << i - j << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}