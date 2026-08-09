#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &matrix, int target) {
    int n = matrix.size();
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (matrix[mid] == target)
            return true;

        else if (matrix[mid] > target)
            high = mid - 1;

        else
            low = mid + 1;
    }
    return false;
}

class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            if (search(matrix[i], target))
                return true;
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

    cout << s.searchMatrix(matrix, 21) << "\n";

    return 0;
}