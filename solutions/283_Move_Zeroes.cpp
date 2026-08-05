#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        int n = nums.size();

        int l = 0, r = 0;
        while (l < n && r < n) {
            if (nums[r] == 0) {
                r++;
            } else {
                swap(nums[l++], nums[r++]);
            }
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