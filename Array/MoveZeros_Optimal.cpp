//Leetcode -> 283 -> Move Zeroes
//Time Complexity -> O(n)
//Space Complexity -> O(1)


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j] != 0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
        
    }
};
