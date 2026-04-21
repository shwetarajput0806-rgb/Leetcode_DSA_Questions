class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;  // handle INT_MIN safely
        
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1;
        
        while (N > 0) {
            if (N % 2 == 1) {   // if odd
                result *= x;
            }
            x *= x;   // square the base
            N /= 2;   // reduce power
        }
        
        return result;
    }
};
        
 
