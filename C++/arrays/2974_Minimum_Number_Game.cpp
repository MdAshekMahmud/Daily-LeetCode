#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> numberGame(vector<int> &nums) {
        sort(nums.begin(), nums.end());

        vector<int> arr;
        for (int i = 1; i < nums.size(); i += 2) {
            arr.push_back(nums[i]);
            arr.push_back(nums[i - 1]);
        }
        return arr;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 3, 4, 5};

    vector<int> ans = sol.numberGame(nums);
    for (int el : ans) {
        cout << el << " ";
    }

    return 0;
}