#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int majorityElement(vector<int> &nums) {
        int n = nums.size();

        int count = 0;
        int candidate = 0;
        for (int i = 0; i < n; i++) {
            if (count == 0) {
                candidate = nums[i];
            }
            if (nums[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }

        return candidate;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3};

    cout << sol.majorityElement(nums) << '\n';

    return 0;
}