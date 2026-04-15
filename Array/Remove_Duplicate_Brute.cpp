//Leetcode Problem 26 -> Remove Duplicate from sorted array
//Time Complexity -> O(n)
//Space Complexity ->O(1)
-------------------------------------------
  -------------------

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[k]){
                k++;
                swap(nums[i],nums[k]);
            }
        }
        k++;
        return k;
        
    }
};
