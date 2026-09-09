#include <bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
  private:
    int badVersion;

  public:
    Solution(int bad = 4) : badVersion(bad) {
    }

    bool isBadVersion(int version) const {
        return version >= badVersion;
    }

    int firstBadVersion(int n) {
        int low = 1, high = n, res = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isBadVersion(mid)) {
                res = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return res;
    }
};

int main() {
    int n = 5, bad = 4;
    Solution sol(bad);

    cout << sol.firstBadVersion(n) << endl;

    return 0;
}