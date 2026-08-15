#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isPalindrome(string s) {
        int n = s.length();
        // Convert to lower case
        for (char &c : s) {
            c = tolower(static_cast<unsigned char>(c));
        }
        // Remove non alphanumeric character
        s.erase(remove_if(s.begin(), s.end(),
                          [](unsigned char c) {
                              bool is_lowercase = (c >= 97 && c <= 122);
                              bool is_digit = (c >= 48 && c <= 57);
                              return !(is_lowercase || is_digit);
                              //   return !(ialnum(c));
                          }),
                s.end());

        int i = 0, j = s.length() - 1;
        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};

int main() {
    Solution sol;
    string str = "A man, a plan, a canal: Panama";

    if (sol.isPalindrome(str)) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}