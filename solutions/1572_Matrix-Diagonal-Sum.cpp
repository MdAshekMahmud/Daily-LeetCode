#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int diagonalSum(vector<vector<int>> &mat) {
        int row = mat.size();
        int col = mat[0].size();

        int diaSum = 0;
        int x = col - 1;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (i == j)
                    diaSum += mat[i][j];
            }
            diaSum += mat[i][x--];
        }
        if (row % 2 != 0)
            diaSum -= mat[row / 2][col / 2];

        return diaSum;
    }
};

int main() {
    Solution s;
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << s.diagonalSum(mat) << '\n';

    return 0;
}