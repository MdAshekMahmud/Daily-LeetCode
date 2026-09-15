#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findDisappearedNumbers(vector<int> &nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] > 0) {
                nums[idx] = -nums[idx];
            }
        }

        vector<int> res;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                res.push_back(i + 1);
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = sol.findDisappearedNumbers(nums);

    for (int el : ans) {
        cout << el << " ";
    }

    return 0;
}