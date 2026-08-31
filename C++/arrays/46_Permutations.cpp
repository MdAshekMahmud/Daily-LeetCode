#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    std::vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        do {
            result.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> permutation = sol.permute(nums);

    for (auto &row : permutation) {
        for (auto el : row) {
            cout << el << " ";
        }
        cout << '\n';
    }

    return 0;
}