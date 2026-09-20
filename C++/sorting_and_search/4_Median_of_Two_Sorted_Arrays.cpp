#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int m = nums1.size();
        int n = nums2.size();

        if (m > n) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int low = 0, high = m;
        while (low <= high) {
            int partition1 = low + (high - low) / 2;
            int partition2 = (m + n + 1) / 2 - partition1;

            int maxLeftX = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int minRightX = (partition1 == m) ? INT_MAX : nums1[partition1];

            int maxLeftY = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
            int minRightY = (partition2 == n) ? INT_MAX : nums2[partition2];

            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                if ((m + n) % 2 == 0) {
                    return (double)(max(maxLeftX, maxLeftY) + min(minRightX, minRightY)) / 2.0;
                } else {
                    return max(maxLeftX, maxLeftY);
                }
            } else if (maxLeftX > minRightY) {
                high = partition1 - 1;
            } else {
                low = partition1 + 1;
            }
        }
        return 0.0;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    cout << sol.findMedianSortedArrays(nums1, nums2) << "\n";

    return 0;
}