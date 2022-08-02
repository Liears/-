class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        long b =n;
        if (x == 0) return 0;
        if(b < 0) {
            x = 1/x;
            b = -b;
        }
        while (b != 0) {
            if (b & 1)
            {
                res *= x;
            }
            x *= x;
            b >>= 1;
        }
        return res;
        
              
    }
};