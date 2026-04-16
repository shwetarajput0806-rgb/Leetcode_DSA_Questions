//Leetcode problem -> 349 -> Intersection of Two Arrays
//Time Complexity -> O(n+m)
//space Complexity -> O(n)

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
             unordered_map<int,int> freq;

        // Step 1: Count nums1
        for(int num : nums1){
            freq[num]++;
        }

        vector<int> ans;

        // Step 2: Check nums2
        for(int num : nums2){

            if(freq[num] > 0){

                ans.push_back(num);
                freq[num] = 0; // unique banane ke liye
            }
        }

        return ans;
        
    }
};
