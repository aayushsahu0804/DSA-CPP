// Leetcode 77. Combinations

#include<iostream>
#include<vector>
using namespace std;

void solve(int n, int k, int index,
               vector<int>& output,
               vector<vector<int>>& ans) {

        // Base case
        if (output.size() == k) {
            ans.push_back(output);
            return;
        }

        // Try every possible choice
        for (int i = index; i <= n; i++) {

            output.push_back(i);

            solve(n, k, i + 1, output, ans);

            // Backtrack
            output.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>> ans;
        vector<int> output;

        solve(n, k, 1, output, ans);

        return ans;
    }