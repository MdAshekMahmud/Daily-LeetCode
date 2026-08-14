#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseString(vector<char> &s) {
        int n = s.size();
        int l = 0;
        int r = n - 1;

        while (l <= r) {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
};

int main() {
    Solution S;
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    S.reverseString(s);

    for (char el : s) {
        cout << el << " ";
    }

    return 0;
}