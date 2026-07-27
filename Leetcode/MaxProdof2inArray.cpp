//Leetcode 1464 : Maximum Product of Two Elements in an Array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProduct(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());

    int n = nums.size();
    return (nums[n - 1] - 1) * (nums[n - 2] - 1);
}