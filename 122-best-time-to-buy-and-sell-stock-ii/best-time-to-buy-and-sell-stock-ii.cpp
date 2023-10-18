class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int profit=0;
        for(int i=1;i<arr.size();i++){
            int temp=arr[i]-arr[i-1];
            if(temp>0){
                profit+=temp;
            }
        }
        return profit;
    }
};