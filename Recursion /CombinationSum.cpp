//LeetCode Problem -> 39 -> Combination sum

class Solution {
private:
    void FindCombination(int index, int target,
                         vector<int>& arr,
                         vector<int>& ds,
                         vector<vector<int>>& ans) {

        // base case
        if (index == arr.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }

        // Pick
        if (arr[index] <= target) {

            ds.push_back(arr[index]);

            // same index because reuse allowed
            FindCombination(index,
                            target - arr[index],
                            arr,
                            ds,
                            ans);

            ds.pop_back();
        }

        // Not Pick
        FindCombination(index + 1,
                        target,
                        arr,
                        ds,
                        ans);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> ans;
        vector<int> ds;

        FindCombination(0, target, candidates, ds, ans);

        return ans;
    }
};
