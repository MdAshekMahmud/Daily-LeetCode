#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hash;

        for (char c : magazine) {
            hash[c]++;
        }

        for (char c : ransomNote) {
            if (hash[c] <= 0) {
                return false;
            }
            hash[c]--;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string ransomNote = "aa";
    string magazine = "aab";

    cout << sol.canConstruct(ransomNote, magazine) << '\n';

    return 0;
}