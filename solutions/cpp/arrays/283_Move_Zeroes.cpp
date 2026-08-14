#include <bits/stdc++.h>
using namespace std;

// Two pointer solution
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

// Library method
/*
class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        stable_partition(nums.begin(), nums.end(), [](int n) { return n != 0; });
    }
};
*/

// One pass solution
/*
class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        int n = nums.size();

        int idx = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[idx++], nums[i]);
            }
        }
    }
};
*/

int main() {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};
    s.moveZeroes(nums);

    for (const int el : nums) {
        cout << el << " ";
    }

    return 0;
}