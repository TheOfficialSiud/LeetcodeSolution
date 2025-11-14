class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {

        vector<vector<int>> mat(n, vector<int> (n,0));
        int  q_len= queries.size();
        for(int i=0;i<q_len;i++){
            int row1=queries[i][0];
            int col1=queries[i][1];
            int row2=queries[i][2];
            int col2=queries[i][3];

            for(int j=row1;j<=row2;j++){
                for(int k=col1;k<=col2;k++){
                    mat[j][k]++;
                }
            }
        }

        return mat;
    }
};