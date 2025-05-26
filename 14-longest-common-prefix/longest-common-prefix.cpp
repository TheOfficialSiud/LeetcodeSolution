class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {

        int i=0;
        int len=s.size();
        string ans="";
        int n=s[0].length();

        
        for(int i=1;i<len;i++){
            // cout<<n<<endl;
            int j=0;
            int m=s[i].length();
            while(j<m&&j<n){
                if(s[0][j]!=s[i][j]){
                    break;
                }
                j++;
            }

            if(j<0)
            return "";
            else
            n=j;
            
        }
        //  if(n<=0)
        //     return "";

        for(int i=0;i<n;i++){
            ans+=s[0][i];
        }
        // cout<<n;

        return ans;
        
    }
};