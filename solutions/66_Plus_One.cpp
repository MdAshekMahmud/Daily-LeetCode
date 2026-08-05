#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        int n = digits.size() - 1;

        while (n >= 0 && digits[n] == 9) {
            digits[n--] = 0;
        }
        if (n < 0) {
            digits.insert(digits.begin(), 1);
        }
        if (n >= 0) {
            digits[n]++;
        }
        return digits;
    }
};
int main() {
    Solution s;
    vector<int> nums = {8, 9, 9, 9};
    vector<int> ans = s.plusOne(nums);

    for (const int el : ans) {
        cout << el << " ";
    }

    return 0;
}