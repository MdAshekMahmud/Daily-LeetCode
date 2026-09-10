#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPeakElement(vector<int> &nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (mid < n - 1 && nums[mid] < nums[mid + 1]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, -1, 0, -3};

    cout << sol.findPeakElement(nums);

    return 0;
}