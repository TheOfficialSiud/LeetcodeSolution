#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n=jobDifficulty.size();
        if (n<d) return -1;// edge case
        vector<vector<int>> dp(n+1, vector<int>(2, INT_MAX));
        dp[n][0]=0;
        for (int sub=1; sub <= d; sub++) {
             for (int i = n-sub; i >= 0; i--){
                int sum = INT_MAX, next = 0;

                for (int j= i+1; j <= n-sub+1; j++) {
                    next = max(next, jobDifficulty[j-1]);
                    int rest = dp[j][(sub-1)&1];

                    if (rest != INT_MAX) {
                        sum = min(sum, next+rest);
                    }
                }

                dp[i][sub&1] = sum;
            }
        }

        return dp[0][d&1]==INT_MAX ?-1:dp[0][d&1];
    }
};