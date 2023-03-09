// Printing pattern like
// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int count = 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count++ << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}