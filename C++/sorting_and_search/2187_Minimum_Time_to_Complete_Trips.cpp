#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long minimumTime(vector<int> &time, int totalTrips) {
        int n = time.size();

        long long low = 0;
        long long high = *max_element(time.begin(), time.end()) * (long long)totalTrips;
        while (low <= high) {
            long long mid = low + (high - low) / 2;

            long long total = 0;
            for (int i = 0; i < n; i++) {
                total += mid / time[i];
            }

            if (total >= totalTrips) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};

int main() {
    Solution sol;
    vector<int> time = {1, 2, 3};
    int totalTrips = 5;

    cout << sol.minimumTime(time, totalTrips) << '\n';

    return 0;
}