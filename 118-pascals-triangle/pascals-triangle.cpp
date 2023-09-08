class Solution {
public:
    vector<vector<int>> generate(int n) {
        int i=0;
        vector<vector<int>> ans;
        while(i<n){
            vector<int> temp(i+1,0);
            for(int j=0;j<=i/2;j++){
                if(j==0){
                temp[j]=1;
                temp[i-j]=1;
                }
                // else if(j==i)
                // temp[j]=1;
                else{
                    temp[j]=ans[i-1][j-1]+ans[i-1][j];
                    temp[i-j]=temp[j];
                }
            }
            ans.push_back(temp);
            i++;
        }
        return ans;
    }
};