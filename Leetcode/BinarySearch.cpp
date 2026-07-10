//Leetcode Problem 704: Binary Search

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) 
{
    int s = 0;
    int e = nums.size() - 1;
    int m = s + (e-s)/2;
    while(s <= e)
    {
        if(nums[m] == target)
        {
            return m;
        }
        if(target > nums[m])
        {
            s = m + 1;
        }
        if(target < nums[m])
        {
            e = m - 1;
        }
        m = s + (e-s)/2;
    }
    return -1;
}

int main()
{
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;
    cout << search(nums, target) << endl;
    return 0;
}