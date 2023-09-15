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
                        pair<int,int> pr;
                        pr.first=k;
                        pr.second=j;
                        zeros.insert(pr);
                        }

                        for(int k=0;k<n;k++){
                        pair<int,int> pr;
                        pr.first=i;
                        pr.second=k;
                        zeros.insert(pr);
                        }
            }
            }
        }

        for(auto it :zeros){
            matrix[it.first][it.second]=0;
        }
    }
};