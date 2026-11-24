#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int arithmeticTriplets(vector<int> &nums, int diff) {
        int n = nums.size(), cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            int j = i + 1, k = n - 1;
            while (j < k) {
                int sum1 = nums[j] - nums[i];
                int sum2 = nums[k] - nums[j];

                if (sum1 == diff && sum2 == diff) {
                    cnt++;
                }

                if (sum1 < diff) {
                    j++;
                } else if (sum2 > diff) {
                    k--;
                } else {
                    j++;
                    k--;
                }
            }
        }
        return cnt;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 4, 6, 7, 10};
    int diff = 3;

    cout << sol.arithmeticTriplets(nums, diff);

    return 0;
}