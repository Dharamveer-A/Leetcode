// Last updated: 07/08/2025, 19:32:20
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy=prices[0],maxProfit=0;
        for(int i=1;i<prices.size();i++){
            maxProfit = max( maxProfit, prices[i]-bestBuy);
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};