#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        if (n < m) {
            return -1;
        }
        for (int i = 0; i <= n - m; i++) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    string haystack = "sadbutsad";
    string needle = "sad";

    cout << sol.strStr(haystack, needle) << "\n";

    return 0;
}