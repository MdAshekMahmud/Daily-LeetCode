#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int matrixScore(vector<vector<int>> &grid) {
        int row = grid.size();
        int col = grid[0].size();

        for (int i = 0; i < row; i++) {

            if (grid[i][0] == 0) {
                for (int j = 0; j < col; j++) {
                    if (grid[i][j] == 0) {
                        grid[i][j] = 1;
                    } else {
                        grid[i][j] = 0;
                    }
                }
            }
        }

        for (int j = 0; j < col; j++) {
            int cnt0 = 0, cnt1 = 0;
            for (int i = 0; i < row; i++) {
                if (grid[i][j] == 0) {
                    cnt0++;
                } else {
                    cnt1++;
                }
            }

            if (cnt0 > cnt1) {
                for (int i = 0; i < row; i++) {
                    if (grid[i][j] == 0) {
                        grid[i][j] = 1;
                    } else {
                        grid[i][j] = 0;
                    }
                }
            }
        }

        int sum = 0;
        for (int i = 0; i < row; i++) {
            int x = 1;
            for (int j = col - 1; j >= 0; j--) {
                sum += grid[i][j] * x;
                x *= 2;
            }
        }
        return sum;
    }
};

int main() {
    Solution s;
    vector<vector<int>> grid = {{0, 0, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 0}};

    cout << s.matrixScore(grid) << "\n";

    return 0;
}