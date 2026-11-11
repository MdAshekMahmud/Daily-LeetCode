#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void subset(vector<int> &nums, vector<vector<int>> &ans, vector<int> &res, int idx) {

        if (idx == nums.size()) {
            ans.push_back(res);
            return;
        }

        // Include current element
        res.push_back(nums[idx]);
        subset(nums, ans, res, idx + 1);

        // Backtrack
        res.pop_back();

        // Skip duplicates when excluding
        int next = idx + 1;

        while (next < nums.size() && nums[next] == nums[idx]) {
            next++;
        }

        // Exclude current element and its duplicates
        subset(nums, ans, res, next);
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> res;

        subset(nums, ans, res, 0);

        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2};

    vector<vector<int>> ans = sol.subsetsWithDup(nums);

    for (auto &row : ans) {
        for (int el : row) {
            cout << el << " ";
        }
        cout << endl;
    }

    return 0;
}