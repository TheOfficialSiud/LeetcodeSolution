class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {

        int i=0;
        int len=s.size();
        string ans=s[0];
        int n=s[0].length();

        
        for(int i=1;i<len;i++){
            int j=0;
            int m=s[i].length();
            string curr="";
            while(j<m&&j<n){
                if(ans[j]==s[i][j]){
                    curr=curr+ans[j];
                }
                else{
                    break;
                }
                j++;
            }

            if(curr=="")
            return "";
            else
            ans=curr;
            
        }

        return ans;
        
    }
};