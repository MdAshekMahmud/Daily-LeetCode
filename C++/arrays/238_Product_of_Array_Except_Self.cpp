#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> productExceptSelf(vector<int> &nums) {
        int n = nums.size();

        vector<int> ans(n, 1);
        int prefix = 1, suffix = 1;

        for (int i = 0; i < n; i++) {
            ans[i] *= prefix;
            ans[n - i - 1] *= suffix;

            prefix *= nums[i];
            suffix *= nums[n - i - 1];
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = s.productExceptSelf(nums);

    for (auto el : ans) {
        cout << el << " ";
    }

    return 0;
}