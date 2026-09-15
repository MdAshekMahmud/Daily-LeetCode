#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findDisappearedNumbers(vector<int> &nums) {
        int n = nums.size();
        unordered_set<int> st(nums.begin(), nums.end());

        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            if (st.find(i) == st.end()) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = sol.findDisappearedNumbers(nums);

    for (int el : ans) {
        cout << el << " ";
    }

    return 0;
}