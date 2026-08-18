#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int firstUniqChar(string s) {
        vector<int> ans(26, 0);
        for (int i = 0; i < s.length(); i++) {
            ans[s[i] - 'a'] += 1;
        }

        for (int i = 0; i < s.length(); i++) {
            if (ans[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    string str = "leetcode";

    cout << sol.firstUniqChar(str) << "\n";

    return 0;
}