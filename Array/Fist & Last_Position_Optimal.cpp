//Leetcode Problem 34 -> Find First and Last Position of Element in Sorted Array
//Solution -> using Binary search
//Time Complexity -> O(log n)
//Space Complexity ->O(1)
----------------------------------------
  -----------------------

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first =-1;
        int last =-1;
        int start =0;
        int end = nums.size()-1;
        
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]==target){
                first = mid;
                end = mid-1;

            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        
        }
        if (first == -1) return {-1, -1};
        //Find last position
        start =0;
        end = nums.size()-1;
        while(start<=end){
            int mid =(start+end)/2;
            if(nums[mid]==target){
                last =mid;
                start = mid +1;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return{first,last};
    }
   
        
};
