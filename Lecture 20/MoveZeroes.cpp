//LeetCode problem 283 : Move Zeroes

// Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zeroes.

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    //shift all non-zeroes to the left and fill the remaining elements with zeroes
    int i = 0;
    for(int j = 0; j<nums.size(); j++)
    {
        if(nums[j] != 0)
        {
            swap(nums[j], nums[i]);
            i++;
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    cout << "Array after moving zeroes: " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}