#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int removeElement(vector<int> &nums, int val) {
        int n = 0;

        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[n++] = nums[i];
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    cout << s.removeElement(nums, 2) << "\n";

    return 0;
}