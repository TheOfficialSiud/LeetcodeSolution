class Solution {

public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        int pick=0;
        int non_pick=0;
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pick=nums[i];
            if(i>1)   // go for i-2,only when i>1,to avoid negative
              pick+=dp[i-2];
            non_pick=0+dp[i-1];
        dp[i]=max(pick,non_pick);
        }
        return dp[n-1];
    }
};