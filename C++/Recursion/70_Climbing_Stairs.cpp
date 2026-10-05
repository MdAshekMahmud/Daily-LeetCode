#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int climbStairs(int n) {
        if (n == 1 || n == 0)
            return 1;

        int ans = climbStairs(n - 1) + climbStairs(n - 2);

        return ans;
    }
};

int main() {
    Solution sol;

    cout << sol.climbStairs(2);

    return 0;
}