#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int addDigits(int num) {
        if (num == 0)
            return 0;
        if (num % 9 == 0) {
            return 9;
        }
        return num % 9;
    }
};

int main() {
    Solution s;
    cout << s.addDigits(38);

    return 0;
}