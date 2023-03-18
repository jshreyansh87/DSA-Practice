// https://leetcode.com/problems/unique-number-of-occurrences/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> freq;

        for (int i = 0; i < arr.size(); i++)
        {
            freq[arr[i]]++;
        }

        set<int> st;

        for (auto i : freq)
        {
            st.insert(i.second);
        }

        if (freq.size() == st.size())
        {
            return true;
        }

        return false;
    }
};