#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix) {
        int m = matrix[0].size(); // Number of columns
        int n = matrix.size();    // Number of rows

        vector<vector<int>> ans(m, vector<int>(n, 0));

        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < m; j++) {
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<vector<int>> ans = s.transpose(matrix);

    for (const auto &row : matrix) {
        for (int el : row) {
            cout << el << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for (const auto &row : ans) {
        for (int el : row) {
            cout << el << " ";
        }
        cout << "\n";
    }

    return 0;
}