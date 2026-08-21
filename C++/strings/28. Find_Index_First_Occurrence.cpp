#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.length();
        int len2 = needle.length();

        int idx = -1;
        for (int i = 0; i <= len1 - len2; i++) {
            bool flag = false;
            for (int j = 0; j < len2; j++) {
                if (haystack[i + j] == needle[j]) {
                    flag = true;
                } else {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                idx = i;
                break;
            }
        }
        return idx;
    }
};

int main() {
    Solution sol;
    string haystack = "sadbutsad";
    string needle = "sad";

    cout << sol.strStr(haystack, needle) << "\n";

    return 0;
}