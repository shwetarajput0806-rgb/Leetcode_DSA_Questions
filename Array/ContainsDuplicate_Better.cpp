//LeetCode Problem -> 217 -> Contains Duplicate
//Time Complexity -> O(n log n)
//space Complexity ->O(1)

-------------------------------------------------------------------
  ---------------------------

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                    return true;
                }
            }
        
        return false;
        
    }
};
