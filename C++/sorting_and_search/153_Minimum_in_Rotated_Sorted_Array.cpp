#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMin(vector<int> &nums) {
        int n = nums.size();

        int low = 0, high = n - 1;
        int res = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[low] <= nums[mid]) {
                res = min(res, nums[mid]);

                if (nums[low] <= nums[high]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                res = min(res, nums[mid]);

                if (nums[low] >= nums[high] && nums[mid] >= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    cout << sol.findMin(nums) << '\n';

    return 0;
}