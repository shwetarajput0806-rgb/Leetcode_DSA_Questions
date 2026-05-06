//LeetCode Probelm -> 724-> Find Pivot Index
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum =0;
        for(int i=0;i<nums.size();i++)
            total_sum += nums[i];
            int left_sum =0;
            for(int j=0;j<nums.size();j++){
                int right_sum = total_sum -left_sum - nums[j];
                if(left_sum == right_sum)
                    return j;

                
                else
                    left_sum += nums[j];
                
            }
            return -1;
            
        
        
    }
};
