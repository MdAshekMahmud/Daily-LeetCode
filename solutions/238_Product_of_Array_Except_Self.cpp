#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> productExceptSelf(vector<int> &nums) {
        int n = nums.size();

        int arr[n];

        arr[0] = 1;

        for (int i = 1; i < n; i++) {
            arr[i] = nums[i - 1] * arr[i - 1];
        }

        int arr1[n];
        arr1[n - 1] = 1;

        for (int i = n - 2; i >= 0; i--) {
            arr1[i] = nums[i + 1] * arr1[i + 1];
        }

        for (int i = 0; i < n; i++) {
            nums[i] = arr[i] * arr1[i];
        }

        return nums;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = s.productExceptSelf(nums);

    for (auto el : ans) {
        cout << el << " ";
    }

    return 0;
}