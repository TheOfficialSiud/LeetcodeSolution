class Solution {
public:

int f(int i,int j1,int j2,int row, int col,vector<vector<int>>& grid,vector<vector<vector<int>>>& dp){
    if( j1< 0 || j2 < 0 || j1 >= col || j2 >= col ){
        return -1e8;
    }

    if(i==row-1){
        if(j1==j2){
            return grid[i][j1];
        }
        else{
            return grid[i][j1] + grid[i][j2];
        }
    }
    if(dp[i][j1][j2]!=-1){
        return dp[i][j1][j2];
    }

    int maxi=-1e8;
    
    for(int dj1=-1;dj1<=1;dj1++){
        for(int dj2=-1;dj2<=1;dj2++){
            int val = 0;
            if(j1==j2){
                val = grid[i][j1];
            }
            else{
                val = grid[i][j1] + grid[i][j2];
            }
            val+=f(i+1,j1+dj1,j2+dj2,row,col,grid,dp);
        maxi = max (maxi,val);
        }    
    }
    return dp[i][j1][j2] = maxi;
}

    int cherryPickup(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<vector<int>>> dp(row,vector<vector<int>>(col,vector<int>(col,-1)));
        return f(0,0,col-1,row,col,grid,dp);
    }
};