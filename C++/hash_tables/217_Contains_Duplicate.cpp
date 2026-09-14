#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool containsDuplicate(vector<int> &nums) {
        set<int> st(nums.begin(), nums.end());

        return nums.size() != st.size();
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};

    cout << sol.containsDuplicate(nums) << "\n";

    return 0;
}