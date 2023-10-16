class Solution {
public:
    vector<int> getRow(int rowIndex) {
       
        if(rowIndex==0)
        return {1};
        vector<int> ans;
       ans.push_back(1);
       ans.push_back(1);
        if(rowIndex==1)
        return ans;
        else{
            rowIndex++;
            for(int i=3;i<=rowIndex;i++){
                vector<int> temp;
                temp.push_back(1);
                for(int j=1;j<i-1;j++){
                        temp.push_back(ans[j-1]+ans[j]);
                }
                temp.push_back(1);
                ans=temp;
            }
        }
        return ans;
    }
};