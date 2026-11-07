#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string minWindow(string s, string t) {
        int m = s.length();
        int n = t.length();
        unordered_map<char, int> hash;

        for (char ch : t) {
            hash[ch]++;
        }

        int cnt = hash.size();
        int i = 0, j = 0, idx = -1, minLen = INT_MAX;

        while (j < m) {

            // Step 1: Expand the window
            if (hash.find(s[j]) != hash.end()) {

                hash[s[j]]--;

                if (hash[s[j]] == 0) {
                    cnt--;
                }
            }

            // Step 2: Shrink the window
            while (cnt == 0) {

                int len = j - i + 1;

                if (len < minLen) {
                    minLen = len;
                    idx = i;
                }

                if (hash.find(s[i]) != hash.end()) {

                    hash[s[i]]++;

                    if (hash[s[i]] > 0) {
                        cnt++;
                    }
                }
                i++;
            }
            j++;
        }

        return idx == -1 ? "" : s.substr(idx, minLen);
    }
};

int main() {
    Solution sol;
    string s = "ADOBECODEBANC";
    string t = "ABC";

    cout << sol.minWindow(s, t);

    return 0;
}