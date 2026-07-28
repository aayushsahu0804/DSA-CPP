// Leetcode 3517 : Smallest Palindromic Rearrangement I

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string smallestPalindrome(string s) 
{
    string ans = s;
    sort(s.begin(), s.end());

    int left = 0;
    int right = s.length() - 1;

    int i = 0;

    while(i < s.length())
    {
        // Found a pair
        if(i + 1 < s.length() && s[i] == s[i+1])
        {
            ans[left] = s[i];
            ans[right] = s[i];

            left++;
            right--;

            i += 2;
        }
        else
        {
            // Odd character
            ans[left] = s[i];
            i++;
        }
    }
    return ans;
}