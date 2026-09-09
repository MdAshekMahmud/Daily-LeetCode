#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        int lower_bound = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                lower_bound = mid;
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        low = 0, high = n - 1;
        int upper_bound = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                upper_bound = mid;
                low = mid + 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return {lower_bound, upper_bound};
    }
};

int main() {
    Solution sol;
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    cout << sol.searchRange(nums, target)[0] << '\n';
    cout << sol.searchRange(nums, target)[1] << '\n';

    return 0;
}