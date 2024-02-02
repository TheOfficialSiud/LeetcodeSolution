class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       int k=1;
       int n=strs.size();
       int j=strs[0].length()-1;

       while(k<n){

        int i=0;
        while(i<=j&&i<strs[k].length()&&strs[0][i]==strs[k][i]){
            i++;
        }
        j=i-1;
        cout<<j<<' ';
        k++;
       }

       string ans="";
       for(int i=0;i<=j;i++){
           ans.push_back(strs[0][i]);
       }

       return ans;
    }
};