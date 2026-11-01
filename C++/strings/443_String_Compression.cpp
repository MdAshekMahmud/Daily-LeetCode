#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int compress(vector<char> &chars) {
        int n = chars.size();

        int idx = 0, i = 0;
        while (i < n) {
            char ch = chars[i];

            int cnt = 0;
            while (i < n && chars[i] == ch) {
                cnt++;
                i++;
            }

            if (cnt == 1) {
                chars[idx++] = ch;
            } else {
                chars[idx++] = ch;

                string t = to_string(cnt);
                for (char c : t) {
                    chars[idx++] = c;
                }
            }
        }
        return idx;
    }
};

int main() {
    Solution sol;
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    cout << sol.compress(chars);

    return 0;
}