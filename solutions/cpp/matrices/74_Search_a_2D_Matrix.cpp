#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0, high = (m * n) - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            int row = mid / n;
            int col = mid % n;

            int mid_element = matrix[row][col];

            if (mid_element == target) {
                return true;
            } else if (mid_element < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return false;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{1, 4, 7, 11, 15},
                                  {2, 5, 8, 12, 19},
                                  {3, 6, 9, 16, 22},
                                  {10, 13, 14, 17, 24},
                                  {18, 21, 23, 26, 30}};

    int ans = s.searchMatrix(matrix, 21);

    if (ans) {
        cout << "true\n";
    } else {
        cout << "False\n";
    }

    return 0;
}