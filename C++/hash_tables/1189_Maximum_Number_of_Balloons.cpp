#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxNumberOfBalloons(string text) {
        int n = text.length();
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            if (text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' ||
                text[i] == 'n') {
                mp[text[i]]++;
            }
        }
        if (mp.size() < 5)
            return 0;

        int ans = INT_MAX;
        for (auto el : mp) {
            if (el.first == 'l' || el.first == 'o') {
                ans = min(ans, el.second / 2);
            }
            ans = min(ans, el.second);
        }

        return ans;
    }
};

int main() {
    Solution sol;
    string text = "nlaebolko";

    cout << sol.maxNumberOfBalloons(text) << '\n';

    return 0;
}