#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int n = nums.size();
        int i = 0;
        int mx1 = 0;
        while (i < n) {
            int cnt = 0;
            if (nums[i] == 1) {
                while (i < n && nums[i] == 1) {
                    cnt++;
                    i++;
                }
            }
            i++;
            mx1 = max(cnt, mx1);
        }
        return mx1;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << s.findMaxConsecutiveOnes(nums) << "\n";

    return 0;
}