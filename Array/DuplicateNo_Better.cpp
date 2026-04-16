//Leetcode Problem -> 287 -> Find the Duplicate Number
//Time Complexity -> O(n log n)
//Space Complexity -> O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return -1;
        
    }
};
