#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isAnagram(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();
        if (len1 != len2)
            return false;

        vector<int> check(26, 0);

        for (char c : s) {
            check[c - 'a']++;
        }

        for (char c : t) {
            if (check[c - 'a'] == 0) {
                return false;
            }
            check[c - 'a']--;
        }
        return true;
    }
};

int main() {
    Solution sol;
    string s = "anagram", t = "nagaram";

    cout << sol.isAnagram(s, t) << "\n";

    return 0;
}