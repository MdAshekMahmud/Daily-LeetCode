#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void solve(string &s, int k, int left) {
        int n = s.length();

        if (left >= n) {
            return;
        }

        int right = min(left + k, n);
        reverse(s.begin() + left, s.begin() + right);

        solve(s, k, left + 2 * k);
    }

    string reverseStr(string s, int k) {
        solve(s, k, 0);

        return s;
    }
};

int main() {
    Solution sol;
    string s = "abcdefg";
    int k = 2;

    cout << sol.reverseStr(s, k) << "\n";

    return 0;
}