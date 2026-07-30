// Leetcode 3014 : Minimum Number of Pushes to Type a Word I

#include <iostream>
#include <string>
using namespace std;

int minimumPushes(string word) 
{

    int ans = 0;

    for (int i = 0; i < word.length(); i++) 
    {
        ans += (i / 8) + 1;
    }

    return ans;
}