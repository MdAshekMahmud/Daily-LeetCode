#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void moveZeroes(vector<int> &nums) {
        stable_partition(nums.begin(), nums.end(), [](int n) { return n != 0; });
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};
    s.moveZeroes(nums);

    for (const int el : nums) {
        cout << el << " ";
    }

    return 0;
}