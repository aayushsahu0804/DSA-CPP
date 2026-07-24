// Leetcode 1470 : Shuffle the Array

#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) 
{
    vector<int> ans;
    int i = 0;
    int j = n;
    int k = 0;
    while(j<nums.size())
    {
        if(k%2 == 0)
        {
            ans.push_back(nums[i]);
            k++;
            i++;
        }
        else
        {
            ans.push_back(nums[j]);
            k++;
            j++;
        }
    }
    return ans;
}