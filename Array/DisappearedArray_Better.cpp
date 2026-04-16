//Leetcode Problem -> 448 -> Find All Numbers Disappeared in an Array
//Time Complexity ->O(n)
//Space Complexity -> O(n)

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(n+1,0);
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(freq[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
            
        
    }
};
