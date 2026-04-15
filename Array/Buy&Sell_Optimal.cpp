//Leetcode Problem -> 121 -> Best Time to Buy and Sell Stock
//Time Complexity -> O(n)
//Space Complexity -> O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minprice){
                minprice = prices[i];
            }
            int profit = prices[i]-minprice;
            if (profit > maxprofit){
                    maxprofit = profit;
                }

            }
            return maxprofit;
        }
        
        
    
};
