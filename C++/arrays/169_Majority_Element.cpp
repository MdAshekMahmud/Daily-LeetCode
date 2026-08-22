#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int majorityElement(vector<int> &nums) {
        int n = nums.size();
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        for (auto el : mp) {
            if (el.second > n / 2) {
                return el.first;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 2, 3};

    cout << sol.majorityElement(nums) << '\n';

    return 0;
}