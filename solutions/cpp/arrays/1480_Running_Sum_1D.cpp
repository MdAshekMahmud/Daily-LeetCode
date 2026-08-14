#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> runningSum(vector<int> &nums) {
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            nums[i] = nums[i] + nums[i - 1];
        }
        return nums;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = sol.runningSum(nums);

    for (auto el : ans) {
        cout << el << " ";
    }

    return 0;
}