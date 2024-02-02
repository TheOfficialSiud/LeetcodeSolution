class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int k=0;
       int n=strs.size();
       int j=strs[0].length()-1;
        string ans="";
       while(k<n){
            ans="";
        int i=0;
        while(i<=j&&i<strs[k].length()&&strs[0][i]==strs[k][i]){
            ans.push_back(strs[0][i]);
            i++;
        }
        j=i-1;
        k++;
       }

       
    //    for(int i=0;i<=j;i++){
    //        ans.push_back(strs[0][i]);
    //    }

       return ans;
    }
};