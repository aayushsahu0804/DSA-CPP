//Leetcode 1480 : Running Sum of 1d Array

#include<iostream>
#include<vector>
using namespace std;

vector<int> runningSum(vector<int>& nums) 
{
    vector<int> ans;
    ans.push_back(nums[0]);
    int temp;
    int j = 0;
    for(int i = 1; i < nums.size(); i++)
    {
        temp = ans[j++] + nums[i];
        ans.push_back(temp);
    }
    return ans;
    
}