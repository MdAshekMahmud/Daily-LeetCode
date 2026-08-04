#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        int minRow = 0, maxRow = row - 1;
        int minColumn = 0, maxColumn = column - 1;

        int count = 0;
        int maxNum = row * column;

        vector<int> ans;
        while (minRow <= maxRow && minColumn <= maxColumn) {
            // right
            for (int j = minColumn; j <= maxColumn && count < maxNum; j++) {
                ans.push_back(matrix[minRow][j]);
                count++;
            }
            minRow++;

            // down
            for (int j = minRow; j <= maxRow && count < maxNum; j++) {
                ans.push_back(matrix[j][maxColumn]);
                count++;
            }
            maxColumn--;

            // left
            for (int j = maxColumn; j >= minColumn && count < maxNum; j--) {
                ans.push_back(matrix[maxRow][j]);
                count++;
            }
            maxRow--;

            // top
            for (int j = maxRow; j >= minRow && count < maxNum; j--) {
                ans.push_back(matrix[j][minColumn]);
                count++;
            }
            minColumn++;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> ans = s.spiralOrder(matrix);

    for (int el : ans) {
        cout << el << " ";
    }

    return 0;
}