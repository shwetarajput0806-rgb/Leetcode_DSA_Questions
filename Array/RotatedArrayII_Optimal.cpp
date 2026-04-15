//Leetcode Problem 81 ->  Search in Rotated Sorted Array II
//Time Complexity -> O(n)
//Space Complexity ->O(1)

-----------------------------------------------
  -------------------------------------
  

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start =0;
        int end = nums.size()-1;
        while(start<=end){
            int mid =(start+end)/2;
            if(nums[mid]==target){
                return true;
            }
            //  handle duplicates first
            if (nums[start] == nums[mid] && nums[mid] == nums[end]) {
                start++;
                end--;
                continue;
            
            }
            if(nums[start]<=nums[mid]){
                if(nums[start]<=target && target<nums[mid]){
                    end = mid -1;
                }
                else{
                   start= mid +1;
                }
            }
            else{
                if(nums[mid] < target && target <= nums[end]){
                    start = mid +1;
                }
                else{
                    end = mid-1;
                }
            }


        }
        return false;
        
    }
};
