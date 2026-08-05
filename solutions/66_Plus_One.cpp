#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        int n = digits.size();
        vector<int> ans;

        int x = n - 1;
        if (digits[n - 1] != 9) {
            digits[n - 1]++;
        } else {
            while (x >= 0 && digits[x] == 9) {
                digits[x] = 0;
                x--;
            }
            if (x < 0) {
                digits[0] = 1;
                digits.push_back(0);
            }
            if (x >= 0) {
                digits[x]++;
            }
        }

        for (int i = 0; i < digits.size(); i++) {
            ans.push_back(digits[i]);
        }
        return ans;
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