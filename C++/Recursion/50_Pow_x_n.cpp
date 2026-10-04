#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double power_fun(double x, long long n) {
        if (n == 0) {
            return 1;
        }

        if (n < 0) {
            return 1.0 / power_fun(x, -n);
        }

        double temp = power_fun(x, n / 2);
        if (n % 2 == 0) {
            return temp * temp;
        }

        return temp * temp * x;
    }
    double myPow(double x, int n) {
        static_cast<long long>(n);

        return power_fun(x, n);
    }
};

int main() {
    Solution sol;
    int x = 2.0000, n = 10;

    cout << sol.myPow(x, n) << '\n';

    return 0;
}