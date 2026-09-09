#include <bits/stdc++.h>
using namespace std;

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int pickedNumber = 0;

int guess(int num) {
    if (num > pickedNumber)
        return -1;
    if (num < pickedNumber)
        return 1;
    return 0;
}

class Solution {
  public:
    int guessNumber(int n) {
        int low = 0, high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            int result = guess(mid);
            if (result == 0) {
                return mid;
            } else if (result > 0) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    int n = 10;
    pickedNumber = 6;

    cout << sol.guessNumber(n);

    return 0;
}