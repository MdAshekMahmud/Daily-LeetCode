#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
        int i1 = 0, j1 = 0, k1 = 0;
        vector<int> ans;

        while (i1 < m && j1 < n) {
            if (nums1[i1] <= nums2[j1]) {
                ans.push_back(nums1[i1]);
                i1++;
            } else if (nums1[i1] > nums2[j1]) {
                ans.push_back(nums2[j1]);
                j1++;
            }
        }

        if (i1 >= m) {
            while (j1 < n) {
                ans.push_back(nums2[j1]);
                j1++;
            }
        } else if (j1 >= n) {
            while (i1 < m) {
                ans.push_back(nums1[i1]);
                i1++;
            }
        }

        for (int i = 0; i < nums1.size(); i++) {
            nums1[i] = ans[i];
        }
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {4, 5, 6};

    s.merge(nums1, 3, nums2, 3);

    for (int el : nums1) {
        cout << el << " ";
    }

    return 0;
}