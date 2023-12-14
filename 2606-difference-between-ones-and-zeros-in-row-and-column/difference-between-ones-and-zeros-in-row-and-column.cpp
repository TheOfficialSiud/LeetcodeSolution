class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> rowOnes(m, 0);
        vector<int> colOnes(n, 0);
        vector<int> rowzero(m, 0);
        vector<int> colzero(n, 0);

        // Count ones in each row and column
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                rowOnes[i] += grid[i][j];
                colOnes[j] += grid[i][j];
                if(grid[i][j]==0){
                        rowzero[i]++;
                        colzero[j]++;
                }
                
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<rowOnes[i]<<" "<<colOnes[i]<<" "<<rowzero[i]<<" "<<colzero[i]<<endl;
        // }

        // Calculate the difference matrix
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                grid[i][j] =rowOnes[i]+colOnes[j]-rowzero[i]-colzero[j];
                // cout<<rowOnes[i]<<" "<<colOnes[j]<<" "<<rowzero[i]<<" "<<colzero[j]<<endl;
            }
        }

        return grid;
    }
};