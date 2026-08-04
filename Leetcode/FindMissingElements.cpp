// Leetcode 3731 : Find Missing Elements

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findMissingElements(vector<int>& nums) 
{

    sort(nums.begin(), nums.end());

    int maxi = nums.back();

    vector<int> ans;

    int i = 0;
    int temp = nums[0];

    while (temp <= maxi)
    {
        // Make sure i is inside the array
        if (i < nums.size() && temp == nums[i])
        {
            i++;
        }
        else
        {
            ans.push_back(temp);
        }

        // Always move to the next expected number
        temp++;
    }

    return ans;
}