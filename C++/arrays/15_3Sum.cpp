#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> res;
        int n = nums.size();
        set<vector<int>> st;

        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> ans = {nums[i], nums[j], nums[k]};
                        sort(ans.begin(), ans.end());

                        if (st.find(ans) == st.end()) {
                            st.insert(ans);
                            res.push_back(ans);
                        }
                    }
                }
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> threeSum = sol.threeSum(nums);

    for (const auto &row : threeSum) {
        for (int el : row) {
            cout << el << " ";
        }
        cout << endl;
    }

    return 0;
}