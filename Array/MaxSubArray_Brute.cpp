//Leetcode Problem 53 ->  Maximum Subarray
//Time Complexity -> O(n)
//Space Complexity ->0(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum =0;
        int maxsum =INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum>=maxsum){
                maxsum = sum;

            }
            if(sum<0){
                sum =0;
            }
        }
        return maxsum;
       
        
    }
};
