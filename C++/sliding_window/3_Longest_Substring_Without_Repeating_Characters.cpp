#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        unordered_set<char> mp;
        int maxLen = 0, left = 0;
        for (int i = 0; i < n; i++) {

            while (mp.find(s[i]) != mp.end()) {
                mp.erase(s[left++]);
            }

            mp.insert(s[i]);
            maxLen = max(maxLen, i - left + 1);
        }
        return maxLen;
    }
};

int main() {
    Solution sol;
    string s = "abcabcbb";

    cout << sol.lengthOfLongestSubstring(s);

    return 0;
}