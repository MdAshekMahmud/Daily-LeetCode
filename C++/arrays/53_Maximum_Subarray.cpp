#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxSubArray(vector<int> &nums) {

        int n = nums.size();
        int maxSum = nums[0], currSum = nums[0];
        for (int i = 1; i < n; i++) {

            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << sol.maxSubArray(nums);

    return 0;
}