#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int ans = 0, i = 0;

    while (n != 0)
    {
        int lastBit = n & 1;
        ans += (lastBit * pow(10, i));

        i++;
        n = n >> 1;
    }

    cout << ans << endl;
}