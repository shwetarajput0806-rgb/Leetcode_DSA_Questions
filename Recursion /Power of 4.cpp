//Leetcode Problem  342 -> Power of 4
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        while(n%4==0){
            n /= 4;

        }  
        return n==1;  
        
    }
};
