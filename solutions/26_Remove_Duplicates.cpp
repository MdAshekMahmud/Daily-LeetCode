#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        int n = nums.size();
        set<int> set;
        for (int el : nums) {
            set.insert(el);
        }
        nums.erase(nums.begin(), nums.end());
        for (int el : set) {
            nums.push_back(el);
        }
        return set.size();
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 1, 2};

    s.removeDuplicates(nums) << '\n';

    for (int el : nums) {
        cout << el << " ";
    }
    return 0;
}