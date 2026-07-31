#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int trap(vector<int> &height) {
        int n = height.size();
        int waterTraped = 0;

        vector<int> leftMax(n), rightMax(n);
        int max1 = INT_MIN, max2 = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (height[i] > max1) {
                max1 = height[i];
            }
            leftMax[i] = max(max1, height[i]);
        }
        for (int i = n - 1; i >= 0; i--) {
            if (height[i] > max2) {
                max2 = height[i];
            }
            rightMax[i] = max(height[i], max2);
        }
        for (int i = 0; i < n; i++) {
            waterTraped += min(leftMax[i], rightMax[i]) - height[i];
        }
        return waterTraped;
    }
};

int main() {
    Solution s;
    vector<int> height = {3, 0, 1, 0, 4, 0, 2};

    cout << s.trap(height);

    return 0;
}