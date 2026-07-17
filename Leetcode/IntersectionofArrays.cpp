// Leetcode 349 : Intersection of Two Arrays

#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
{

    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++) 
    {
        bool found = false;

        for (int j = 0; j < nums2.size(); j++) 
        {
            if (nums1[i] == nums2[j]) {

                // Check if already present in answer
                bool alreadyPresent = false;

                for (int k = 0; k < ans.size(); k++) 
                {
                    if (ans[k] == nums1[i]) {
                        alreadyPresent = true;
                        break;
                    }
                }

                if (!alreadyPresent)
                    ans.push_back(nums1[i]);

                break;
            }
        }
    }

    return ans;
}