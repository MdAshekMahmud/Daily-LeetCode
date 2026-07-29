#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void sortColors(vector<int> &nums) {
        int n = nums.size();

        int a = 0, b = 0, c = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                a++;
            else if (nums[i] == 1)
                b++;
            else if (nums[i] == 2)
                c++;
        }

        for (int i = 0; i < n; i++) {
            if (a > 0) {
                nums[i] = 0;
                a--;
            } else if (b > 0) {
                nums[i] = 1;
                b--;
            } else if (c > 0) {
                nums[i] = 2;
                c--;
            }
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    s.sortColors(nums);

    for (int el : nums) {
        cout << el << " ";
    }

    return 0;
}