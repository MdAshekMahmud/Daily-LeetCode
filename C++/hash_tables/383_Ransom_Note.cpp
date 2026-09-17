#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        int cnt = 0, idx = 0;
        for (int i = 0; i < magazine.length(); i++) {
            if (idx < ransomNote.length() && magazine[i] == ransomNote[idx]) {
                cnt++;
                idx++;
            }
        }

        return idx == ransomNote.length();
    }
};

int main() {
    Solution sol;
    string ransomNote = "aa";
    string magazine = "aab";

    cout << sol.canConstruct(ransomNote, magazine) << '\n';

    return 0;
}