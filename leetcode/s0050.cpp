#include <iostream>

class Solution {
   public:
    double myPow(double x, int n) {
        if (n >= 0) {
            return quickMul(x, n);
        } else {
            return 1 / quickMul(x, -n);
        }
    }
    double quickMul(double x, int n) {
        if (n == 0) {
            return 1.0;
        } else if (n % 2 == 0) {
            double qm=quickMul(x,n/2);
            return qm * qm;
        } else {
            double qm=quickMul(x,n/2);
            return qm * qm * x;
        }
    }
};