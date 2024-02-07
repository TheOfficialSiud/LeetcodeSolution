class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        // int c=0;
        int n1=s.length(),n2=t.length(),i=0,j=0;
        // if(n1>n2||(n1==n2&&s!=t))
        // return 0;
        while(i<n1&&j<n2){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        // cout<<j;
        return (i==n1);
    }
};