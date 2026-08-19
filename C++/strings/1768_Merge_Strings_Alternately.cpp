#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string mergeAlternately(string word1, string word2) {
        string ans;

        int i = word1.length(), j = word2.length();
        int x = 0;
        while (x < i && x < j) {
            ans.push_back(word1[x]);
            ans.push_back(word2[x]);
            x++;
        }
        if (x < j) {
            while (x < j) {
                ans.push_back(word2[x]);
                x++;
            }
        } else {
            while (x < i) {
                ans.push_back(word1[x]);
                x++;
            }
        }

        return ans;
    }
};

int main() {
    Solution sol;
    string word1 = "abcd";
    string word2 = "pqr";

    cout << sol.mergeAlternately(word1, word2);

    return 0;
}