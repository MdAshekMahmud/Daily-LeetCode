#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool search(vector<int> &nums, int target) {
        int n = nums.size();

        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return true;
            }

            if (nums[low] == nums[mid]) {
                low++;
            } else if (nums[low] <= nums[mid]) {

                if (target >= nums[low] && target <= nums[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {

                if (target >= nums[mid] && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    cout << sol.search(nums, 0) << '\n';

    return 0;
}