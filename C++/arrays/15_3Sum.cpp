#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        int n = nums.size();
        set<vector<int>> st;

        for (int i = 0; i < n; i++) {
            int target = -nums[i];
            set<int> s;

            for (int j = i + 1; j < n; j++) {
                int third = target - nums[j];
                if (s.find(third) != s.end()) {
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                s.insert(nums[j]);
            }
        }
        vector<vector<int>> res(st.begin(), st.end());
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