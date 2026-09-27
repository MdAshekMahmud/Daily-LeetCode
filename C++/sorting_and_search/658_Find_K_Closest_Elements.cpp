#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x) {
        int n = arr.size();
        int low = 0, high = n - k;
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == arr[mid + k]) {

                if (arr[mid] < x) {
                    low = mid + 1;
                } else {
                    high = mid;
                }
            } else if (abs(x - arr[mid]) <= abs(x - arr[mid + k])) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return vector<int>(arr.begin() + low, arr.begin() + low + k);
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 1, 2, 3, 4, 5};
    int k = 4, x = -1;

    vector<int> res = sol.findClosestElements(arr, k, x);
    for (int el : res) {
        cout << el << " ";
    }

    return 0;
}