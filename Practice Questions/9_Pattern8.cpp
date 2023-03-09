// Printing pattern like
// 1
// 2 1
// 3 2 1
// 4 3 2 1

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
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }

        cout << endl;
        i++;
    }
}