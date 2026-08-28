#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxArea(vector<int> &height) {
        int i = 0;
        int j = height.size() - 1;

        int maxWater = 0;
        while (i < j) {
            int currMax = min(height[i], height[j]) * (j - i);
            int x = height[i];
            int y = height[j];

            if (x <= y) {
                i++;
            } else {
                j--;
            }
            maxWater = max(maxWater, currMax);
        }

        return maxWater;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << sol.maxArea(height) << '\n';

    return 0;
}