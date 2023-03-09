// https://leetcode.com/problems/number-of-1-bits/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;

        while (n)
        {
            // if last of bit of n is 1
            if (n & 1)
            {
                count++;
            }

            n = n >> 1;
        }

        return count;
    }
};