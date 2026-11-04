#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findDuplicates(vector<int> &nums) {
        int n = nums.size();

        vector<int> res;
        for (int el : nums) {
            int idx = abs(el) - 1;

            if (nums[idx] < 0) {
                res.push_back(idx + 1);
            }

            nums[idx] = -1 * abs(nums[idx]);
        }

        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    for (int el : sol.findDuplicates(nums)) {
        cout << el << " ";
    }

    return 0;
}