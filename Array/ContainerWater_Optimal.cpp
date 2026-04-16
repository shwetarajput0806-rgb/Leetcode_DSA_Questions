//Leetcode problem -> 11 ->  Container With Most Water
//Time Complexity -> O(n)
//Space complexity -> O(1)


class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_water =0;
        int i=0;
        int j=n-1;
        while(i<j){
                int width = j-i;
                int ht = min(height[i],height[j]);
                int area = width * ht;
                max_water = max(max_water,area);
                if(height[i]<height[j]){
                    i++;
                }
                else if(height[i]>height[j]){
                    j--;
                }
                else{
                    i++;
                    j--;
                }

                
            }
        
        return max_water;
    }
};
