#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void printSub(vector<int> &nums, vector<int> ans, vector<vector<int>> &res, int idx) {
        if (idx == nums.size()) {
            res.push_back(ans);
            return;
        }

        printSub(nums, ans, res, idx + 1);
        ans.push_back(nums[idx]);
        printSub(nums, ans, res, idx + 1);
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> res;
        vector<int> ans;

        printSub(nums, ans, res, 0);

        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> res = sol.subsets(nums);

    for (const vector<int> &row : res) {
        for (int el : row) {
            cout << el << " ";
        }
        cout << '\n';
    }

    return 0;
}