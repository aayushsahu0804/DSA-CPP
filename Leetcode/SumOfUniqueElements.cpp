// Leetcode 1748 : Sum of Unique Elements

#include <iostream>
#include <vector>
using namespace std;

int sumOfUnique(vector<int>& nums) 
{
    vector<int> freq(101, 0);

    for (int x : nums) 
    {
        freq[x]++;
    }

    int ans = 0;

    for (int i = 1; i <= 100; i++) 
    {
        if (freq[i] == 1) 
        {
            ans += i;
        }
    }

    return ans;
}