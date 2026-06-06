//Leetcode Problem: 1752. Check if Array Is Sorted and Rotated

#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) 
{
    int count = 0;
    int n = nums.size();
    for(int i = 1; i<n; i++)
    {
        if(nums[i-1] > nums[i])
        {
            count++;
        }
    }
    if(nums[n-1] > nums[0])
    {
        count++;
    }
    
    /*for(int i = 0; i<nums.size(); i++)
    {
        if(nums[i] > nums[(i+1)%nums.size()])
        {
            count++;
        }
    }*/

    return count <= 1;
}