//Leetcode  Problem -> 128 -> Longest Consecutive Sequence
//Time Complexity -> O(n)
//Space Complexity -> O(1)

---------------------------------------------------
  ------------------------------
  
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int count =0;
        int longest =1;
        int last_smaller = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==last_smaller){
                count= count+1;
                last_smaller=nums[i];
            }
            else if(last_smaller != nums[i]){
                count =1;
                last_smaller=nums[i];
            }
            longest = max(longest,count);
        }
        return longest;
        
    }
};
