#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxNumberOfBalloons(string text) {
        int b = 0, a = 0, l = 0, o = 0, n = 0;

        for (char ch : text) {
            if (ch == 'b')
                b++;
            else if (ch == 'a')
                a++;
            else if (ch == 'l')
                l++;
            else if (ch == 'o')
                o++;
            else if (ch == 'n')
                n++;
        }

        return min({b, a, n, l / 2, o / 2});
    }
};

int main() {
    Solution sol;
    string text = "nlaebolko";

    cout << sol.maxNumberOfBalloons(text) << '\n';

    return 0;
}