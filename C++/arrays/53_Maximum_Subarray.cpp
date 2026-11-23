#include <bits/stdc++.h>
using namespace std;

// class Solution {
//   public:
//     int maxSubArray(vector<int> &nums) {

//         int n = nums.size();
//         int maxSum = nums[0], currSum = nums[0];
//         for (int i = 1; i < n; i++) {

//             currSum = max(nums[i], currSum + nums[i]);
//             maxSum = max(maxSum, currSum);
//         }
//         return maxSum;
//     }
// };

class Solution {
  public:
    int subArrayMax(vector<int> &nums, int left, int right) {
        if (left > right) {
            return INT_MIN;
        }

        int mid = left + (right - left) / 2, leftSum = 0, rightSum = 0;

        for (int i = mid - 1, currSum = 0; i >= left; i--) {
            currSum += nums[i];
            leftSum = max(leftSum, currSum);
        }

        for (int i = mid + 1, currSum = 0; i <= right; i++) {
            currSum += nums[i];
            rightSum = max(rightSum, currSum);
        }

        int lmax = subArrayMax(nums, left, mid - 1);
        int rmax = subArrayMax(nums, mid + 1, right);

        return max({lmax, rmax, leftSum + nums[mid] + rightSum});
    }

    int maxSubArray(vector<int> &nums) {
        return subArrayMax(nums, 0, nums.size() - 1);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 4, -1, 7, 8};

    cout << sol.maxSubArray(nums);

    return 0;
}