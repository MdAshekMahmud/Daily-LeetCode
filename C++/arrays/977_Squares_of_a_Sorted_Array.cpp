#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> sortedSquares(vector<int> &nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;

        vector<int> ans(n, 0);
        for (int i = n - 1; i >= 0; i--) {
            int x = abs(nums[left]);
            int y = abs(nums[right]);

            if (y > x) {
                ans[i] = nums[right] * nums[right];
                right--;
            } else {
                ans[i] = nums[left] * nums[left];
                left++;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> res = sol.sortedSquares(nums);

    for (int el : res) {
        cout << el << " ";
    }

    return 0;
}