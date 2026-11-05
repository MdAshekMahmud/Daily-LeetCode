#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    const int MOD = 1e9 + 7;

    long long pow(long long x, long long n) {
        if (n == 0) {
            return 1;
        }

        long long temp = pow(x, n / 2);
        if (n % 2) {
            return (temp * temp * x) % MOD;
        }

        return (temp * temp) % MOD;
    }
    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long evenWays = pow(5, even);
        long long oddWays = pow(4, odd);

        return (evenWays * oddWays) % MOD;
    }
};

int main() {
    Solution sol;

    cout << "Number of good pairs: " << sol.countGoodNumbers(4);

    return 0;
}