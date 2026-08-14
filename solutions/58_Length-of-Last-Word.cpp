#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lengthOfLastWord(string s) {
        int n = s.length();

        int i = n - 1, count = 0;
        while (i >= 0) {
            if (s[i] != ' ') {
                while (i >= 0 && s[i] != ' ') {
                    count++;
                    i--;
                }
                break;
            }
            i--;
        }
        return count;
    }
};

int main() {
    Solution sol;
    string input = "Md Ashek Mahmud";
    cout << sol.lengthOfLastWord(input);

    return 0;
}