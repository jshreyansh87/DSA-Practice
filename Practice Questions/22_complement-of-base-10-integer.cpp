// https://leetcode.com/problems/complement-of-base-10-integer/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int ans = 0, i = 0;

        if (n == 0)
        {
            return 1;
        }

        while (n)
        {
            int lastBit = !(n & 1);

            if (lastBit == 1)
            {
                ans += pow(2, i);
            }

            i++;
            n = n >> 1;
        }

        return ans;
    }
};