class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int profit=INT_MIN;
       int n=prices.size();
       int t;
       for(int i=n-2;i>=0;i--){
            if(profit==INT_MIN){
                profit=prices[n-1]-prices[i];
                t=max(prices[n-1],prices[n-2]);
            }
            else{
                profit=max(profit,t-prices[i]);
                if(prices[i]>t)
                t=prices[i];
            }
       }

        if(profit<0)
        return 0;
        else
        return profit;
    }
};