// Leetcode 1399 : Count Largest Group

#include <iostream>
#include <vector>
using namespace std;

int countLargestGroup(int n) 
{
    vector<int> freq(37, 0);

    // Count how many numbers belong to each digit-sum group
    for (int i = 1; i <= n; i++) 
    {
        int x = i;
        int sum = 0;

        while (x > 0) 
        {
            sum += x % 10;
            x /= 10;
        }

        freq[sum]++;
    }

    // Find the maximum group size
    int maxi = 0;
    for (int i = 0; i < freq.size(); i++) 
    {
        if (freq[i] > maxi)
        {
            maxi = freq[i];
        }  
    }

    // Count how many groups have that maximum size
    int ans = 0;
    for (int i = 0; i < freq.size(); i++) 
    {
        if (freq[i] == maxi)
        {
            ans++;
        }    
    }

    return ans;
}