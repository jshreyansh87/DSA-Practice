// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sumOfDigits = 0;
        int productOfDigits = 1;

        while (n)
        {
            int digit = n % 10;

            sumOfDigits += digit;
            productOfDigits *= digit;

            n /= 10;
        }

        return productOfDigits - sumOfDigits;
    }
};