#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int smallestDivisor(vector<int> &nums, int threshold) {

        int low = 1, high = 1e6;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            int total = 0;
            for (int num : nums) {
                total += (num + mid - 1) / mid;
            }

            if (total <= threshold) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 5, 9};
    int threshold = 6;

    cout << sol.smallestDivisor(nums, threshold);

    return 0;
}