// Leetcode 1636 : Sort Array by Increasing Frequency

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> frequencySort(vector<int>& nums) 
{
        vector<int> freq(201, 0);

        // Count frequency
        for (int x : nums) 
        {
            freq[x + 100]++;
        }

        // Sort according to frequency
        sort(nums.begin(), nums.end(), [&](int a, int b) 
        {
            if (freq[a + 100] != freq[b + 100])
            {
                return freq[a + 100] < freq[b + 100];
            }

            return a > b;
        });

        return nums;
    }