#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rotate(vector<vector<int>> &matrix) {
        int n = matrix.size();

        // Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each n
        for (auto &row : matrix) {
            reverse(row.begin(), row.end());
        }
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    s.rotate(matrix);

    for (const auto &row : matrix) {
        for (int el : row) {
            cout << el << " ";
        }
        cout << '\n';
    }

    return 0;
}