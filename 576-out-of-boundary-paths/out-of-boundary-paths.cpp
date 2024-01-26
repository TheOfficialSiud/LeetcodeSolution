class Solution 
{
public:
    vector<pair<int,int>> directions={{1,0},{0,1},{-1,0},{0,-1}};
    map<vector<int>,int> dp;
    int mod=1e9+7;
    int dfs(int r, int c, int m, int n, int k)
    {
        int out=0;
        if(k==0)
        {
            if(r>=m || c>=n || r<0 || c<0) out++;
            return out;
        }
        if(r>=m || c>=n || r<0 || c<0) return ++out;
        vector<int> v={r,c,k};
        if(dp.find(v)!=dp.end()) return dp[v];
        for(auto it: directions)
        {
            int dr=r+it.first, dc=c+it.second;
            out=(out+dfs(dr,dc,m,n,k-1))%mod;
        }
        return dp[v]=out%mod;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) 
    {
        return dfs(startRow,startColumn,m,n,maxMove);
    }
};