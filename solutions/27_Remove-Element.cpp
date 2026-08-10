#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int removeElement(vector<int> &nums, int val) {
        int n = nums.size();

        int i = 0, j = 0;
        while (i < n && j < n) {
            if (nums[j] == val) {
                while (nums[j] == val && j < n - 1) {
                    j++;
                }
                swap(nums[i], nums[j]);
            } else if (nums[i] == val) {
                swap(nums[i], nums[j]);
            }
            i++;
            j++;
        }
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != val) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    cout << s.removeElement(nums, 2) << "\n";

    return 0;
}