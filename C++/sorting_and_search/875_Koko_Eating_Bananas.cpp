#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minEatingSpeed(vector<int> &piles, int h) {
        int n = piles.size();

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        long res = high;

        while (low <= high) {
            long mid = low + (high - low) / 2;
            long hours = 0;

            for (int bananas : piles) {
                double x = bananas / double(mid);
                hours += ceil(x);
            }

            if (hours <= h) {
                res = min(res, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    vector<int> piles = {30, 11, 23, 4, 20};

    cout << sol.minEatingSpeed(piles, 5);

    return 0;
}