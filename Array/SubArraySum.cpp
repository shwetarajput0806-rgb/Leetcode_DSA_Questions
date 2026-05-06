//LeetCode PRoblem -> 560 ->  Subarray Sum Equals K

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0] = 1;
        int pre_Sum =0;
        int count =0;
        for(int i=0;i<nums.size();i++){
            pre_Sum += nums[i];
            int remove =pre_Sum-k;
            count += mp[remove];
            mp[pre_Sum] +=1;

        }
        return count;
    
    }
};
