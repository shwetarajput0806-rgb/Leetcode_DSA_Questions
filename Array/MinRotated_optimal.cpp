//Leetcode Problem -> 153 -> Find Minimum in Rotated Sorted Array
//time Complexity -> O(n)
//Space Complexity ->O(1)

--------------------------------------------
  ---------------------------------

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end = nums.size()-1;
        int ans =INT_MAX;
        while(start<=end){
            int mid =(start+end)/2;
            //For left half
            if(nums[start]<=nums[mid]){
                ans = min(nums[start],ans);
                start = mid+1;
            }
            else {//if(nums[mid]<nums[end])//Right part soretd
                ans = min(nums[mid],ans);
                end = mid-1;

            }
        }
        return ans;
        
    }
};
