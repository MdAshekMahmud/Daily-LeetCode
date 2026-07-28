#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int thirdMax(vector<int> &nums) {
        int n = nums.size();

        long long max1 = LLONG_MIN, max2 = LLONG_MIN, max3 = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] > max1) {
                max3 = max2;
                max2 = max1;
                max1 = nums[i];
            } else if (nums[i] > max2 && nums[i] < max1) {
                max3 = max2;
                max2 = nums[i];
            } else if (nums[i] > max3 && nums[i] < max2) {
                max3 = nums[i];
            }
        }

        return max3 == LLONG_MIN ? max1 : max3;
    }
};

int main() {
    Solution s;

    vector<int> nums = {2, 2, 3, 1};

    int ans = s.thirdMax(nums);

    cout << ans << '\n';

    return 0;
}