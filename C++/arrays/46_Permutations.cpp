#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> permute(vector<int> &nums) {
        vector<vector<int>> permutations = {{}};

        for (int num : nums) {
            vector<vector<int>> next_permutations;

            for (const auto &p : permutations) {

                for (int i = 0; i <= p.size(); i++) {
                    vector<int> new_perm = p;

                    new_perm.insert(new_perm.begin() + i, num);
                    next_permutations.push_back(new_perm);
                }
            }
            permutations = move(next_permutations);
        }
        return permutations;
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