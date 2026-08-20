#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minCnt = INT_MAX;

    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty())
            return "";

        if (strs.size() == 1)
            return strs[0];

        int len = strs.size();

        for (int i = 1; i < len; i++) {
            maxPre(strs[i - 1], strs[i]);
        }

        string s = strs[0];
        string ans = "";

        for (int i = 0; i < minCnt; i++) {
            ans.push_back(s[i]);
        }

        return ans;
    }

    void maxPre(const string &s, const string &t) {
        int len1 = s.length();
        int len2 = t.length();

        int count = 0;
        int len = min(len1, len2);

        for (int i = 0; i < len; i++) {
            if (s[i] != t[i])
                break;

            count++;
        }

        minCnt = min(minCnt, count);
    }
};

int main() {
    Solution sol;
    vector<string> strs = {"flower", "flow", "flight"};

    string ans = sol.longestCommonPrefix(strs);

    for (char ch : ans) {
        cout << ch;
    }

    return 0;
}