class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxSellingPrice=0;
        int maxProfit=0;
        for(int i=prices.size()-1;i>=0;i--){
            maxSellingPrice = max(maxSellingPrice,prices[i]);
            maxProfit = max(maxProfit,maxSellingPrice-prices[i]);
        }
        return maxProfit;
    }
};