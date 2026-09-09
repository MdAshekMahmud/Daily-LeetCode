#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPerfectSquare(int num) {
        int low = 1, high = num;
        while (low <= high) {
            long mid = low + (high - low) / 2;
            long res = mid * mid;

            if (res == num) {
                return true;
            } else if (res < num) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return false;
    }
};

int main() {
    Solution sol;
    int num = 14;

    cout << sol.isPerfectSquare(num);
    return 0;
}