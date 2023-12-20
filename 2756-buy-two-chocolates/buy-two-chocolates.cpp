class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        // sort(prices.begin(),prices.end());
        // int temp=prices[0]+prices[1];
        // if(temp>money)
        // return money;
        // else
        // return money-temp;
        int t1=INT_MAX,t2=INT_MAX;
        int pos=-1;


        for(int i=0;i<prices.size();i++){
            if(prices[i]<=t1){
                t1=prices[i];
                pos=i;
            }
        }
        for(int i=0;i<prices.size();i++){
            if(i!=pos&&prices[i]<=t2)
            t2=prices[i];
        }

        int temp=t1+t2;
        if(temp>money)
        return money;
        else
        return money-temp;
    }
};