#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> rowAndMaximumOnes(vector<vector<int>> &mat) {
        int row = mat.size();
        int col = mat[0].size();

        int maxOnesIdx = 0;
        int numOfOnes = 0;
        for (int i = 0; i < row; i++) {
            int currOnes = 0;
            for (int j = 0; j < col; j++) {
                if (mat[i][j] == 1) {
                    currOnes++;
                }
            }
            if (currOnes > numOfOnes) {
                numOfOnes = currOnes;
                maxOnesIdx = i;
            }
        }

        return {maxOnesIdx, numOfOnes};
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{0, 0}, {1, 1}, {0, 0}};
    vector<int> ans = s.rowAndMaximumOnes(matrix);

    cout << ans[0] << " " << ans[1];

    return 0;
}