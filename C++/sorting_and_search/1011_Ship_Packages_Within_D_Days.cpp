#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool canShip(vector<int> &weights, int mid, int days) {
        int ships = 1, currCap = 0;

        for (int w : weights) {
            if (currCap + w > mid) {
                ships++;
                currCap = w;
            } else {
                currCap += w;
            }
        }

        return ships <= days;
    }
    int shipWithinDays(vector<int> &weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);

        int res = right;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (canShip(weights, mid, days)) {
                res = min(mid, res);
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << sol.shipWithinDays(weights, 5);

    return 0;
}