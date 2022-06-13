// ADITYA DEOGAONKAR //

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minsofar = prices[0];
        int maxprofit = 0;
        
        for(int i=0;i<prices.size();i++) {
            
            if(prices[i]<minsofar) {
                minsofar = prices[i];
            }
            int profit = prices[i]-minsofar;
            maxprofit = max(maxprofit,profit);
        }
        return maxprofit;
        
    }
};
