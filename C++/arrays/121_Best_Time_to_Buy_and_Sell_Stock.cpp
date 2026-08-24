#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxProfit(vector<int> &price) {
        int n = price.size();

        int left = 0;
        int right = 1;
        int maxProfit = 0;

        while (right < n) {
            if (price[left] > price[right]) {
                left = right;
            } else {
                maxProfit = max(price[right] - price[left], maxProfit);
            }
            right++;
        }

        return maxProfit;
    }
};

int main() {
    Solution sol;
    vector<int> price = {7, 1, 5, 3, 6, 4};

    cout << sol.maxProfit(price) << '\n';

    return 0;
}