class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<vector<int>> vec;
        for(int i=0;i<mat.size();i++){
            int c=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    c++;
                }
            }
            vec.push_back({c,i});
        }

        sort(vec.begin(),vec.end());
        vector<int> ans;
        for(int i=0;i<k;i++)
        ans.push_back(vec[i][1]);
        return ans;
    }
};