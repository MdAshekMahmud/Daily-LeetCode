#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
  public:
    int countElements(vector<int> &nums) {
        int n = nums.size();
        int maximum = *max_element(nums.begin(), nums.end());
        int minimum = *min_element(nums.begin(), nums.end());

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < maximum && nums[i] > minimum) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int> nums = {11, 7, 2, 15};

    int count = s.countElements(nums);
    cout << count << endl;
    return 0;
}