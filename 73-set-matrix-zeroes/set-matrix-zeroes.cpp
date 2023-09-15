class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>> zeros;
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    cout<<i<<j;
                    for(int k=0;k<m;k++){
                        zeros.insert({k,j});
                        }

                        for(int k=0;k<n;k++){
                            zeros.insert({i,k});
                        }
            }
            }
        }

        for(auto it :zeros){
            matrix[it.first][it.second]=0;
        }
    }
};