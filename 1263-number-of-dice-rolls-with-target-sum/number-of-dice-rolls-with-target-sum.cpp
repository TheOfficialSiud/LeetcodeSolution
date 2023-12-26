class Solution {
public:
    int mod = 1e9+7;
    int solve(int n, int k, int tar, vector<vector<int>>&dp){
        // if all the dices are thrown
        if(n==0){ 
            if(tar==0) // and sum becomes equal to ZERO
                return 1;
            return 0;
        }
        // if sum > target, it cannot become equal to target then
        if(tar<0)
            return 0;
        if(dp[n][tar]!=-1)
            return dp[n][tar];
        int ans = 0;
        for(int i = 1;i<=k;i++){
            ans=(ans+solve(n-1, k, tar-i, dp))%mod;
        }
        return dp[n][tar]=ans;
    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1, vector<int>(target+1, -1));
        return solve(n, k, target, dp);
    }
};