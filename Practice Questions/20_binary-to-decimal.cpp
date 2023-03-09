#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1010;
    int ans = 0, i = 0;

    while (n != 0)
    {
        int lastBit = n % 10;

        if (lastBit == 1)
        {
            ans += pow(2, i);
        }

        i++;
        n /= 10;
    }

    cout << ans << endl;
}