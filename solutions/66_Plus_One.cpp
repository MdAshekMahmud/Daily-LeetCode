/*
Using Carry - O(n) Time and O(1) Space
To add one to the number represented by digits, follow the below steps :

- Parse the given array from the end as we do in school addition.
- If the last elements are 9, make it 0 and carry = 1.
- For the next iteration check carry and if it adds to 10, do the same as step 2.
- After adding carry, make carry = 0 for the next iteration.
- If the carry still remains after traversing the entire array, append 1 in the beginning.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        int n = digits.size();

        int carry = 1;

        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }
        if (carry)
            digits.insert(digits.begin(), carry);

        return digits;
    }
};
/*
class Solution {
  public:
    vector<int> plusOne(vector<int> &digits) {
        int n = digits.size() - 1;

        while (n >= 0 && digits[n] == 9) {
            digits[n--] = 0;
        }
        if (n < 0) {
            digits.insert(digits.begin(), 1);
        }
        if (n >= 0) {
            digits[n]++;
        }
        return digits;
    }
};
*/
int main() {
    Solution s;
    vector<int> nums = {8, 9, 9, 9};
    vector<int> ans = s.plusOne(nums);

    for (const int el : ans) {
        cout << el << " ";
    }

    return 0;
}