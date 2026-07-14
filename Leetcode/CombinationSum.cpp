#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>& candidates, int target, int index,
               vector<int>& output,
               vector<vector<int>>& ans) {

        // Base case
        if (target == 0) {
            ans.push_back(output);
            return;
        }

        if (target < 0 || index >= candidates.size())
            return;

        // Include
        output.push_back(candidates[index]);
        solve(candidates, target - candidates[index], index, output, ans);

        // Backtrack
        output.pop_back();

        // Exclude
        solve(candidates, target, index + 1, output, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> output;

        solve(candidates, target, 0, output, ans);

        return ans;
    }

