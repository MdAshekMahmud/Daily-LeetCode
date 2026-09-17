#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int numIdenticalPairs(vector<int> &nums) {
        int n = nums.size();

        unordered_map<int, int> hash;
        for (int i = 0; i < n; i++) {
            hash[nums[i]]++;
        }

        int cnt = 0;
        for (auto &[x, y] : hash) {
            if (y > 1) {
                cnt += y * (y - 1) / 2;
            }
        }

        return cnt;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1, 1};

    cout << sol.numIdenticalPairs(nums) << "\n";

    return 0;
}