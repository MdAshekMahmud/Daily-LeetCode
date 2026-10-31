#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeOccurrences(string s, string part) {

        while (s.find(part) != string::npos) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s = "daabcbaabcbc";
    string part = "abc";

    cout << sol.removeOccurrences(s, part);

    return 0;
}