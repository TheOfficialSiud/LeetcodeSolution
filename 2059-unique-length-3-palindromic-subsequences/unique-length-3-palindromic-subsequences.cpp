class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.length(), ans=0;
        for(int i=0 ; i<26 ; i++){
            vector<bool> temp(26);
            char c = i+'a';
            int j=0, k=n-1;
            for(; j<n && s[j]!=c; j++){}
            if(j==n){
                continue;
            }
            for(;k>=0 && s[k]!=c ; k--){}
            if(j==k){continue;}
            int cnt=0;
            for(j=j+1 ; j<k ; j++){
                if(!temp[s[j]-'a']){
                    temp[s[j]-'a']=1;
                    cnt++;
                }
            }
            ans+=cnt;
        }
        return ans;
    }
};