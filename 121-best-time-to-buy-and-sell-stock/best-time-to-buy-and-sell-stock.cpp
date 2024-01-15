class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // vector<int> profit(n,0);
        int profit=0;
        
        int n=prices.size();
        int cmp=INT_MIN;
        
        for(int i=n-2;i>=0;i--){
            cmp=max(cmp,prices[i+1]);
            profit=max(profit,cmp-prices[i]);
        }
        
        return profit;
    }
};