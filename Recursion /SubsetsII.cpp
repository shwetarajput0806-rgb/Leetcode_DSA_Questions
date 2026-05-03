//Leetcode Problem -> SubsetsII -> 90

class Solution {
private:
    void Solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
        
        // store current subset
        ans.push_back(output);

        for(int i = index; i < nums.size(); i++) {

            // skip duplicates
            if(i > index && nums[i] == nums[i-1])
                continue;

            // include
            output.push_back(nums[i]);

            // recursion
            Solve(nums, output, i + 1, ans);

            // backtrack
            output.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        vector<int> output;

        Solve(nums, output, 0, ans);

        return ans;
    }
};
