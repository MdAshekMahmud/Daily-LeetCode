#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool checkXMatrix(vector<vector<int>> &grid) {
        int n = grid.size();

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {
                if (i == j || i == n - j - 1) {
                    if (grid[i][j] == 0) {
                        return false;
                    }
                }
            }

            for (int j = 0; j < n; j++) {
                if (i != j && i != n - 1 - j) {
                    if (grid[i][j] != 0) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{2, 0, 0, 1}, {0, 3, 1, 0}, {0, 5, 2, 0}, {4, 0, 0, 2}};

    cout << s.checkXMatrix(matrix);

    return 0;
}