//Leetcode Problem 75-> Sort Colors
//Solution -> using Binary Search
//Time Complexity -> O(log n)
//Space Complexity -> O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
         int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
