// Leetcode3016 : Minimum Number of Pushes to type Word II

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int minimumPushes(string word) 
{
        
    int ans = 0;
    vector<int> map(26, 0);
    for(int i=0; i<word.length(); i++)
    {
        map[word[i] - 'a']++;
    }
    sort(map.rbegin(), map.rend());
    for (int i = 0; i < map.size(); i++) 
    {
        ans += ((i / 8) + 1) * map[i];
    }

    return ans;
}