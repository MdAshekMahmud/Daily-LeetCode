#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s, int l, int r) {
    while (l < r) {
        if (s[l++] != s[r--]) {
            return false;
        }
    }
    return true;
}

class Solution {
  public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;

        while (l < r) {
            if (s[l] != s[r]) {
                return isPalindrome(s, l, r - 1) || isPalindrome(s, l + 1, r);
            }
            l++;
            r--;
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s = "abca";

    cout << sol.validPalindrome(s) << '\n';

    return 0;
}