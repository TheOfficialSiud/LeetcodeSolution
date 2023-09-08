class Solution {
public:
    vector<vector<int>> generate(int n) {
        int i=0;
        vector<vector<int>> ans;
        while(i<n){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                if(j==0)
                temp.push_back(1);
                else if(j==i)
                temp.push_back(1);
                else{
                    temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
            ans.push_back(temp);
            i++;
        }
        return ans;
    }
};