#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    char nextGreatestLetter(vector<char> &letters, char target) {
        int n = letters.size();
        int low = 0, high = n - 1;
        char res = letters[0];

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (letters[mid] > target) {
                res = letters[mid];
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return res;
    }
};

int main() {
    Solution sol;
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'a';

    cout << sol.nextGreatestLetter(letters, target) << '\n';
    return 0;
}