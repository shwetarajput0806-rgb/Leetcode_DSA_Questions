//Leetcode problem -> 11 -> Container With Most Water
//time complexity -> O(n^2)
//space complexity ->O(1)
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int max_water =0;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                int width = j-i;
                int ht = min(height[i],height[j]);
                int area = width * ht;
                max_water = max(max_water,area);

                
            }
        }
        return max_water;
    }
};
