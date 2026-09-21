#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMin(vector<int> &nums) {
        int n = nums.size();

        int low = 0, high = n - 1;
        while (low < n - 1 && nums[low] == nums[high]) {
            low++;
        }
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[n - 1]) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return nums[low];
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 2, 0, 1};

    cout << sol.findMin(nums) << '\n';

    return 0;
}