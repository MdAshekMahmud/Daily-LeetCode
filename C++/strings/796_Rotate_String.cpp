#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        string str = s + s;
        return str.find(goal) != string::npos;
    }
};

int main() {
    Solution sol;

    string str = "abcde";
    string goal = "cdeab";

    cout << sol.rotateString(str, goal);

    return 0;
}