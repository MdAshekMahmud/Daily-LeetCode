#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int x = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                ans[x++] = nums[i];
            }
        }

        for (int i = 0; i < n; i++) {
            nums[i] = ans[i];
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};
    s.moveZeroes(nums);

    for (const int el : nums) {
        cout << el << " ";
    }

    return 0;
}