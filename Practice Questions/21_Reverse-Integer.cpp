// https://leetcode.com/problems/reverse-integer/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int ans = 0;

        while (x)
        {
            int lastDigit = x % 10;

            if ((ans > (INT_MAX / 10)) || (ans < (INT_MIN / 10)))
            {
                return 0;
            }

            ans = (10 * ans) + lastDigit;

            x /= 10;
        }

        return ans;
    }
};