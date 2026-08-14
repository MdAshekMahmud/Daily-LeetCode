#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int removeDuplicates(vector<int> &nums) {
        int n = nums.size();
        if (n <= 2) {
            return n;
        }
        int k = 2, i = 2;
        while (i < n) {
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
            i++;
        }

        return k;
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3};
    int size = s.removeDuplicates(nums);

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}