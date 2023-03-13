// https://leetcode.com/problems/power-of-two/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {

        if (n == 0)
        {
            return false;
        }

        int numberOfOneBits = 0;

        while (n)
        {
            int lastBit = n & 1;

            if (lastBit == 1)
            {
                numberOfOneBits += 1;
            }

            if (numberOfOneBits > 1)
            {
                return false;
            }

            n = n >> 1;
        }

        return true;
    }
};